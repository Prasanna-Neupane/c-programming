/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main() {
    long int num, sum = 0;
    printf("Enter numbers in series: ");
    scanf("%ld",  &num);

    while(num!=0)
    {
        sum+=num;
        scanf("%ld", &num);
    }

    printf("The sum is %ld", sum); 
    return 0;
}