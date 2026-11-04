#include <stdio.h>

int main() {
    int a[10], sum = 0;
    printf("enter the numbers: ");
    for (int i = 0;i<=9;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0;i<=9;i++)
    {
        sum = sum+a[i];
    }
    printf("the sum of the given number is %d", sum);
    return 0;
}