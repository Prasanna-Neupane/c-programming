// this is the question from the digital design and computer architecture.
// Exercise 1.69 Write a program in your favorite language (e.g., C, Java, Perl) to
// convert numbers from binary to decimal. The user should type in an unsigned
// binary number. The program should print the decimal equivalent.

#include <stdio.h>
#include <math.h>
#define n 16
int main()
{
    long long unsigned bit;
    int rum = 0, dum = 0;
    printf("******************the number can only be upto 16-bit***********************");
    printf("\nenter bit: ");
    scanf("%d", &bit);

    for (int i = 0; i < n; i++)
    {
        dum = bit % 10;
        if (dum == 1 || dum == 0)
        {
            rum += dum * pow(2, i);
            bit = bit / 10;
        }
        else
        {
            printf("please provide valid input. ");
            return 0;
        }
    }
    printf("\ndecimal: %d", rum);

    return 0;
}