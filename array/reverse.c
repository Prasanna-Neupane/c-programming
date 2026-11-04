#include <stdio.h>

int main() {
    int a[10], sum = 0;
    printf("enter the numbers: ");
    for (int i = 0;i<=9;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("In reverse order: ");
    for (int i = 9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}