#include <stdio.h>

int prime(int a);

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if(prime(num))
    {
        printf("%d is a prime number.");
    }
    else 
    {
        printf("%d is not a prime number. ");
    }
    return 0;
}

int prime(int a)
{
    for (int i = 2; i<a; i++)
    {
        if(a%i==0)
        {
            return 1;
        } 
    }
    return 0;
}