#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool a[10] = {false};
    unsigned int num, n;
    printf("enter numbers: ");
    scanf("%u", &num);
    while (num>0)
    {
        n = num % 10;
        if (a[n] == true)
        {
            printf("digit is repeated.");
            return 0;
        }
        else
        {
            a[n] = true;
            num = num/10;
        }
    }
    printf("digit is not repeated. ");
    return 0;
}
