// Write a program that asks the user to enter two integers, then calculates and displays their
// greatest common divisor (GCD):
// Enter two integers: 12 28
// Greatest common divisor: 4

#include <stdio.h>

int main() {
    int num, num2, rem = 0;
    printf("enter 2 digits: ");
    scanf("%d %d", &num, &num2);

    while(rem!=0)
    {
        rem = num%num2;
        num = num2;
        num2 = rem;
 
    }
    printf("The GCD is %d", num);
    return 0;
}