// #include <stdio.h>

// // Function to simulate the balance scale
// int weigh(int *group1, int *group2, int size)
// {
//     int weight1 = 0, weight2 = 0;
//     for (int i = 0; i < size; i++)
//     {
//         weight1 += group1[i];
//         weight2 += group2[i];
//     }
//     if (weight1 == weight2)
//         return 0;
//     return weight1 > weight2 ? 1 : -1;
// }

// // Function to find the odd ball
// void findOddBall(int balls[])
// {
//     // Divide into 3 groups
//     int group1[4], group2[4], group3[4];
//     for (int i = 0; i < 4; i++)
//     {
//         group1[i] = balls[i];
//         group2[i] = balls[i + 4];
//         group3[i] = balls[i + 8];
//     }

//     int result = weigh(group1, group2, 4);
//     if (result == 0)
//     {
//         // The odd ball is in group3
//         // Weigh the first three balls of group3 against three known normal balls
//         int subResult = weigh(group3, group1, 3);
//         if (subResult == 0)
//         {
//             // The odd ball is the remaining one in group3
//             printf("The odd ball is ball %d\n", 12);
//         }
//         else
//         {
//             // Determine if it's lighter or heavier
//             if (subResult == 1)
//             {
//                 printf("The odd ball is ball %d and it is heavier\n", 9 + subResult);
//             }
//             else
//             {
//                 printf("The odd ball is ball %d and it is lighter\n", 9 + subResult);
//             }
//         }
//     }
//     else
//     {
//         // The odd ball is in group1 or group2
//         // Further divide the heavier/lighter group
//         int suspectGroup = (result == 1) ? 1 : 2;
//         int *suspectBalls = (suspectGroup == 1) ? group1 : group2;

//         // Weigh first 3 balls against the last one
//         int subGroup1[3], subGroup2[1];
//         for (int i = 0; i < 3; i++)
//         {
//             subGroup1[i] = suspectBalls[i];
//         }
//         subGroup2[0] = suspectBalls[3];

//         int subResult = weigh(subGroup1, group1, 3);
//         if (subResult == 0)
//         {
//             printf("The odd ball is ball %d and it is %s\n", 4 * (suspectGroup - 1) + 4, (result == 1) ? "heavier" : "lighter");
//         }
//         else
//         {
//             int oddIndex = 0;
//             if (subResult == result)
//             {
//                 for (int i = 0; i < 3; i++)
//                 {
//                     if (subGroup1[i] != balls[i])
//                     {
//                         oddIndex = i;
//                         break;
//                     }
//                 }
//             }
//             printf("The odd ball is ball %d and it is %s\n", 4 * (suspectGroup - 1) + oddIndex + 1, (result == 1) ? "heavier" : "lighter");
//         }
//     }
// }

// int main()
// {
//     // Initialize balls, where 1 means normal, and -1 or 2 means the odd ball
//     // For this example, let's say the 5th ball is lighter
//     int balls[12] = {1, 1, 1, 1, -1, 1, 1, 1, 1, 1, 1, 1};

//     findOddBall(balls);
//     return 0;
// }

#include <stdio.h>

// Function to simulate the balance scale
int weigh(int *group1, int *group2, int size)
{
    int weight1 = 0, weight2 = 0;
    for (int i = 0; i < size; i++)
    {
        weight1 += group1[i];
        weight2 += group2[i];
    }
    if (weight1 == weight2)
        return 0;
    return weight1 > weight2 ? 1 : -1;
}

// Function to find the odd ball
void findOddBall(int balls[])
{
    // Divide into 3 groups
    int groupA[4], groupB[4], groupC[4];
    for (int i = 0; i < 4; i++)
    {
        groupA[i] = balls[i];
        groupB[i] = balls[i + 4];
        groupC[i] = balls[i + 8];
    }

    int result1 = weigh(groupA, groupB, 4);
    if (result1 == 0)
    {
        // The odd ball is in groupC
        int subResult1 = weigh(&groupC[0], &groupC[1], 1);
        if (subResult1 == 0)
        {
            int subResult2 = weigh(&groupC[2], &groupA[0], 1);
            if (subResult2 == 0)
            {
                printf("The odd ball is ball 12 and it is %s\n", (balls[11] != 1) ? (balls[11] > 1 ? "heavier" : "lighter") : "unknown");
            }
            else
            {
                printf("The odd ball is ball %d and it is %s\n", subResult2 == 1 ? 11 : 12, subResult2 == 1 ? "heavier" : "lighter");
            }
        }
        else
        {
            int subResult2 = weigh(&groupC[0], &groupA[0], 1);
            if (subResult2 == 0)
            {
                printf("The odd ball is ball %d and it is %s\n", subResult1 == 1 ? 9 : 10, subResult1 == 1 ? "heavier" : "lighter");
            }
            else
            {
                printf("The odd ball is ball %d and it is %s\n", subResult1 == subResult2 ? 9 : 10, subResult1 == subResult2 ? "heavier" : "lighter");
            }
        }
    }
    else
    {
        int suspectGroup = result1 == 1 ? 1 : 2;
        int *suspectBalls = suspectGroup == 1 ? groupA : groupB;
        int *otherGroup = suspectGroup == 1 ? groupB : groupA;

        int subGroup1[3], subGroup2[3];
        for (int i = 0; i < 3; i++)
        {
            subGroup1[i] = suspectBalls[i];
            subGroup2[i] = otherGroup[i];
        }

        int result2 = weigh(subGroup1, subGroup2, 3);
        if (result2 == 0)
        {
            printf("The odd ball is ball %d and it is %s\n", 4 * (suspectGroup - 1) + 4, result1 == 1 ? "heavier" : "lighter");
        }
        else
        {
            int subGroup3[2], subGroup4[2];
            subGroup3[0] = suspectBalls[0];
            subGroup3[1] = suspectBalls[1];
            subGroup4[0] = otherGroup[0];
            subGroup4[1] = otherGroup[1];

            int result3 = weigh(subGroup3, subGroup4, 2);
            if (result3 == 0)
            {
                printf("The odd ball is ball %d and it is %s\n", 4 * (suspectGroup - 1) + 3, result1 == 1 ? "heavier" : "lighter");
            }
            else if (result3 == result1)
            {
                printf("The odd ball is ball %d and it is %s\n", 4 * (suspectGroup - 1) + 1, result1 == 1 ? "heavier" : "lighter");
            }
            else
            {
                printf("The odd ball is ball %d and it is %s\n", 4 * (suspectGroup - 1) + 2, result1 == 1 ? "heavier" : "lighter");
            }
        }
    }
}

int main()
{
    // Initialize balls, where 1 means normal, and -1 or 2 means the odd ball
    // For this example, let's say the 5th ball is lighter
    int balls[12] = {1, 1, 1, 1, -1, 1, 1, 1, 1, 1, 1, 1};

    findOddBall(balls);
    return 0;
}
