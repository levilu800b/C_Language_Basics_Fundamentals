#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <unistd.h>

struct Point
{
    double x, y;
    unsigned long color;
};

// Global variables for X11
Display *display;
Window win;
GC gc;

unsigned long colors[7] = {0xff1f53, 0xfcdefa, 0xff0000, 0xff0000, 0xff0202, 0xff0008, 0xff0505};
const int xScreen = 1200;
const int yScreen = 800;
const double PI = 3.1426535159;
const double e = 2.71828;
const double average_distance = 0.162;
const int quantity = 506;
const int circles = 210;
const int frames = 40;
struct Point *origin_points;
struct Point *points;

double screen_x(double x)
{
    x += xScreen / 2;
    return x;
}

double screen_y(double y)
{
    y = -y + yScreen / 2;
    return y;
}

int create_random(int x1, int x2)
{
    if (x2 > x1)
    {
        return rand() % (x2 - x1 + 1) + x1;
    }
    return 0;
}

void draw_point(double x, double y, unsigned long color)
{
    XSetForeground(display, gc, color);
    XFillArc(display, win, gc,
             (int)screen_x(x),
             (int)screen_y(y),
             2, 2, 0, 360 * 64);
}

void create_data()
{
    int index = 0;
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    // Generate heart outline points
    for (double radian = 0.1; radian <= 2 * PI; radian += 0.005)
    {
        x2 = 16 * pow(sin(radian), 3);
        y2 = 13 * cos(radian) - 5 * cos(2 * radian) - 2 * cos(3 * radian) - cos(4 * radian);
        double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        if (distance > average_distance)
        {
            x1 = x2;
            y1 = y2;
            origin_points[index].x = x2;
            origin_points[index].y = y2;
            index++;
        }
    }

    // Generate points for the heart fill
    index = 0;
    for (double size = 0.1, lightness = 1.5; size <= 20; size += 0.1)
    {
        double success_p = 1 / (1 + pow(e, 8 - size / 2));
        if (lightness > 1)
        {
            lightness -= 0.0025;
        }

        for (int i = 0; i < quantity; ++i)
        {
            if (success_p > (double)create_random(0, 100) / 100.0)
            {
                points[index].color = colors[create_random(0, 6)];
                points[index].x = size * origin_points[i].x + create_random(-4, 4);
                points[index].y = size * origin_points[i].y + create_random(-4, 4);
                index++;
            }
        }
    }

    int points_size = index;

    // Draw initial points
    for (int frame = 0; frame < frames; ++frame)
    {
        for (int i = 0; i < points_size; ++i)
        {
            double x = points[i].x;
            double y = points[i].y;
            double distance = sqrt(pow(x, 2) + pow(y, 2));
            double distance_increase = -0.0009 * distance * distance + 0.35714 * distance + 5;
            double x_increase = distance_increase * x / distance / frames;
            double y_increase = distance_increase * y / distance / frames;

            points[i].x += x_increase;
            points[i].y += y_increase;

            draw_point(points[i].x, points[i].y, points[i].color);
        }

        // Draw additional decoration points
        for (double size = 17; size < 23; size += 0.3)
        {
            for (int i = 0; i < quantity; ++i)
            {
                if ((create_random(0, 100) / 100.0 > 0.6 && size >= 20) ||
                    (size < 20 && (double)create_random(0, 100) / 100.0 > 0.95))
                {
                    double x, y;
                    if (size >= 20)
                    {
                        x = origin_points[i].x * size + create_random(-frame * frame / 5 - 15, frame * frame / 5 + 15);
                        y = origin_points[i].y * size + create_random(-frame * frame / 5 - 15, frame * frame / 5 + 15);
                    }
                    else
                    {
                        x = origin_points[i].x * size + create_random(-5, 5);
                        y = origin_points[i].y * size + create_random(-5, 5);
                    }
                    draw_point(x, y, colors[create_random(0, 6)]);
                }
            }
        }
    }
}

int main()
{
    // Initialize X11
    display = XOpenDisplay(NULL);
    if (!display)
    {
        fprintf(stderr, "Cannot open display\n");
        return 1;
    }

    int blackColor = BlackPixel(display, DefaultScreen(display));
    win = XCreateSimpleWindow(display,
                              RootWindow(display, DefaultScreen(display)),
                              0, 0, xScreen, yScreen, 0,
                              blackColor, blackColor);

    XSelectInput(display, win, StructureNotifyMask);
    XMapWindow(display, win);
    gc = XCreateGC(display, win, 0, NULL);

    // Wait for window to be mapped
    while (1)
    {
        XEvent e;
        XNextEvent(display, &e);
        if (e.type == MapNotify)
            break;
    }

    XFlush(display);
    srand(time(NULL));

    // Allocate memory for points
    origin_points = (struct Point *)malloc(quantity * sizeof(struct Point));
    points = (struct Point *)malloc(circles * quantity * sizeof(struct Point));

    if (!origin_points || !points)
    {
        fprintf(stderr, "Memory allocation failed\n");
        XCloseDisplay(display);
        return 1;
    }

    create_data();

    // Animation loop
    bool extend = true;
    int frame = 0;
    while (1)
    {
        usleep(10000);
        XClearWindow(display, win);

        if (extend)
        {
            frame++;
            if (frame >= 19)
            {
                extend = false;
            }
        }
        else
        {
            frame--;
            if (frame <= 0)
            {
                extend = true;
            }
        }

        create_data(); // Redraw the heart

        // Check for exit condition
        XEvent e;
        if (XPending(display))
        {
            XNextEvent(display, &e);
            if (e.type == KeyPress)
            {
                break; // Exit the loop on key press
            }
        }
    }

    // Properly clean up and free resources
    XCloseDisplay(display);
    free(origin_points);
    free(points);
}