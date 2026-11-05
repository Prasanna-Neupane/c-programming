#include <stdio.h>
int main()
{
    typedef float array;

    float p, t, r;
    int space = 5;
    array bank[space];
    printf("enter the principal amount: ");
    scanf("%f", &p);
    printf("enter rate: ");
    scanf("%f", &r);
    printf("enter the time: ");
    scanf("%f", &t);

    printf("Years: ");
    for (int i = 0; i < space; i++)
    {
        printf("%10.2f %%", r + i);
        bank[i] = p;
    }

    printf("\n");

    for (int i = 0; i < t; i++)
    {
        printf("%d\t\t", i+1);
        for (int i = 0; i < space; i++)
        {
            bank[i] = bank[i]+((float)(r+i)/100)*bank[i];
            printf("%.2f \t\t", bank[i]);
        }
        printf("\n");
    }

    return 0;
}