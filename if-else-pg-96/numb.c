// Write a program that asks the user for a two-digit number, then prints the English word for
// the number:
// Enter a two-digit number: 45
// You entered the number forty-five.
// Hint: Break the number into two digits. Use one switch statement to print the word for the
// first digit (“twenty,” “thirty,” and so forth). Use a second switch statement to print the
// word for the second digit. Don’t forget that the numbers between 11 and 19 require special
// treatment.

#include <stdio.h>

int main()
{
    int num, first, second;
    printf("enter a two digit number: ");
    scanf("%d", &num);

    first = num/10;
    second = num%10;

    if(num>9 && num<20)
    {
        switch(num)
        {
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("thirteen"); break;
            case 13: 
        }
    }
    return 0;
}