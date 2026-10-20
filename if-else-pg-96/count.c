// Write a program that calculates how many digits a number contains:
// Enter a number: 374
// The number 374 has 3 digits
// You may assume that the number has no more than four digits. Hint: Use if statements to
// test the number. For example, if the number is between 0 and 9, it has one digit. If the num-
// ber is between 10 and 99, it has two digits

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num < 10)
    {
        printf("It contains 1 digits");
    }
    else if (num > 9 && num < 100)
    {
        printf("it contains 2 digits");
    }
    else if (num > 99 && num < 1000)
    {
        printf("it contains 3 digits");
    }
    else if (num > 999 && num < 10000)
    {
        printf("it contains 4 digits");
    }
    else
    {
        printf("the inputed number has error. ");
    }
    return 0;
}