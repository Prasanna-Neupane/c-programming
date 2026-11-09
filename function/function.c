#include <stdio.h>

int prime(int a);

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if(prime(num))
    {
        printf("%d is a prime number.", num);
    }
    else 
    {
        printf("%d is not a prime number. ", num);
    }
    return 0;
}

int prime(int a)
{
    if(a<=1)
    {
        return 0;
    }
    for (int i = 2; i<a; i++)
    {
        if(a%i==0)
        {
            return 0;
        } 
    }
    return 1;
}