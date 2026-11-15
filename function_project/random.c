#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void)
{
   
    srand(2);

    int a = rand();
    int b = rand();
    
    srand(2);

    int c = rand();
    int d = rand();

    printf("%d %d\n", a, b);
    printf("%d %d\n", c, d);

    return 0;
}