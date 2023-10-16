#include <stdio.h>

int main () {

    int grades[100];
    grades[0] = 12;

    printf("%d\n", grades[0]);

    int grades2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d\n", grades2[4]);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int grades[3]; // Define the grades variable here

//     grades[0] = 80;
//     grades[1] = 85;
//     grades[2] = 90;

//     int average = (grades[0] + grades[1] + grades[2]) / 3;
//     printf("The average of the 3 grades is: %d", average);

//     return 0;
// }




// Two dimensional Array

// #include <stdio.h>

// int main()
// {
    // Todo declare and initialize the 2D array grades
//     float grades[2][5]; // Assuming 2 rows (subjects) and 5 columns (grades)

//     grades[0][0] = 80;
//     grades[0][1] = 70;
//     grades[0][2] = 65;
//     grades[0][3] = 89;
//     grades[0][4] = 90;

//     grades[1][0] = 85;
//     grades[1][1] = 80;
//     grades[1][2] = 80;
//     grades[1][3] = 82;
//     grades[1][4] = 87;

//     float average;
//     int i;
//     int j;

//     for (i = 0; i < 2; i++)
//     { // Loop for subjects
//         average = 0;
//         for (j = 0; j < 5; j++)
//         { // Loop for grades in each subject
//             average += grades[i][j];
//         }

        // Compute the average marks for subject i
//         average /= 5; // Assuming 5 grades per subject
//         printf("The average marks obtained in subject %d is: %.2f\n", i, average);
//     }

//     return 0;
// }
