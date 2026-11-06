// 1. Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
// were repeated:
// Enter a number: 939577
// Repeated digit(s): 7 9

#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool a[10] = {false};
    int num, dum;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Repeated digits(s): ");
    while(num>0)
    {
        dum = num%10;
        if(a[dum]==false)//not repeated 
        {
            a[dum]=true;
        }

        else if(a[dum] == true)
        {
           printf("%d ", dum);
        }
        else
        {
            printf("\n something is wrong in the program. ");
        }
        num = num/10;
        
    }
    return 0;
}