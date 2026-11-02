#include <stdio.h>

int main()
{
    char a, b;
    int i = 1;
    a = 'a';
    printf("%c \n", a);
    printf("%d", a);

    while (a != 'z')
    {
        a+=i;
        printf("\n%c : %d", a,a);
    }

    printf("enter a number");
    scanf(" %d", &b);

    return 0;
}


