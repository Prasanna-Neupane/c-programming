#include <stdio.h>
int fact(numi);
int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    printf("The factorial of the number %d is %d", num, fact(num));
    return 0;
}

int fact(numi)
{
    if (numi != 0)
    {
        return numi*fact(numi-1);
    }
    
}