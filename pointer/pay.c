#include <stdio.h>

void pay_amount(int dollar, int *twenty, int *ten, int *five, int *one);

int main() {
    int dollar = 0, twenties, tens, fives, ones;
    printf("enter a dollar amount(X$): ");
    scanf("%d", &dollar);


    pay_amount(dollar, &twenties, &tens, &fives, &ones);

    printf("\n$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n$5 bills: %d", fives);
    printf("\n$1 bills: %d", ones);
    return 0;
}

void pay_amount(int money, int *twenty, int *ten, int *five, int *one)
{
    *twenty = money/20;
    money %= 20;

    *ten = money/10;
    money %= 10;

    *five = money/5;
    money %= 5;

    *one = money;
    return;
}
