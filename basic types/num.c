#include <stdio.h>

int main()
{
    int i = 0;
    char a;
    printf("enter your name: ");
    a = getchar();
    while (a != '\n')
    {
        if (a != ' ')
        {
            i += 1;
            printf("sequence %d :%c \n", i, a);
            a = getchar();
            
        }

        else
        {
            printf("sequence %d :%c \n", i, a);
            a = getchar();
            continue;
        }
    }
    printf("Your word contains %d characters.", i);
    return 0;
}