// Write a program that reads a 5 × 5 array of integers and then prints the row sums and the
// column sums:
// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
// Row totals: 30 27 40 36 28
// Column totals: 34 37 37 32 21
// imagine each row is the result of quiz grades of a student. Find the total marks secured by the student. Also the average, highest and lowest quiz score of each quiz.

#include <stdio.h>
#define n 5
int main()
{
    int sheet[n][n] = {0},
        stud_sum[n] = {0},
        quiz_sum[n] = {0},
        quiz_high[n] = {0},
        quiz_low[n] = {100, 100, 100, 100, 100};
    float quiz_avg[n] = {0};

    for (int row = 0; row < n; row++)
    {
        printf("Student %d: ", row + 1);

        for (int col = 0; col < n; col++)
        {
            scanf("%d", &sheet[row][col]);
            stud_sum[row] = stud_sum[row] + sheet[row][col];
            quiz_sum[col] += sheet[row][col];
        }
    }

    for (int col = 0; col < n; col++)
    {

        for (int row = 0; row < n; row++)
        {
            if (quiz_high[col] < sheet[row][col])
            {
                quiz_high[col] = sheet[row][col];
            }

            if (quiz_low[col] > sheet[row][col])
            {
                quiz_low[col] = sheet[row][col];
            }
        }
    }

    printf("\n");
    for (int row = 0; row < n; row++)
    {
        printf("Student %d: ", row + 1);
        for (int col = 0; col < n; col++)
        {
            printf("%d ", sheet[row][col]);
        }
        printf("= %d", stud_sum[row]);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        quiz_avg[i] = quiz_sum[i] / (float)n;
    }

    

    for (int i = 0; i < n; i++)
    {

        printf("highest mark in quiz %d = %d \n", i + 1, quiz_high[i]);
        printf("lowest mark in quiz %d = %d \n", i + 1, quiz_low[i]);
        printf("average mark in quiz %d = %.2f \n", i + 1, quiz_avg[i]);
    }
    return 0;
}