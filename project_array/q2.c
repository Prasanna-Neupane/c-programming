// 2. Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
// many times each digit appears in the number:
// Enter a number: 41271092
// Digit: 0 1 2 3 4 5 6 7 8 9
// Occurrences: 1 2 2 0 1 0 0 1 0 1

#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool box[10] = {false};
    int occur[10] = {0};
    long long int num, dum;
    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num > 0)
    {
        dum = num % 10;
        if (box[dum] == false)
        {
            box[dum] = true;
            occur[dum] +=1;
        }
        else if (box[dum] == true)
        {

            occur[dum] += 1;
        }
        else
        {
            printf("something is wrong with the program. ");
        }

        num = num/10;
    }
    printf("    Digit: ");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("Occurence: ");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", occur[i]);
    }
    return 0;
}