#include <stdio.h>
#include <limits.h>
int main()
{
    unsigned int option;
    printf("====================NUMBER RANGE ANALYZER====================== \n");
    printf("1. Compare signed and unsigned integers\n");
    printf("2. Analyze integer limits\n");
    printf("3. Calculate sum of a large range\n");
    printf("4. Detect integer overflow\n");
    printf("5. Exit\n");

    printf("Choose an option: ");
    scanf("%u", &option);

    switch (option)
    {
    case 1:
    {
        int num;
        printf("welcome to sthe comparison of signed and unsigned integers. \n");
        printf("enter numbers to keep checking numbers: ");
        scanf("%d", &num);

        // to keep checking the numbers.
        printf("signed(default) integer: %d \n", num);
        unsigned int nom = num;
        printf("unsigned integer: %u \n", nom);
        
        if(num>0)
            printf("%d is suitable for unsigned integer. ", num);
        else
            printf("%d is suitable for signed integer. ", num);
        break;
    }

    case 2:
        {
            
        }
    }

    return 0;
}