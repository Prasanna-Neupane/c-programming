#include <stdio.h>
#define N 100

int sum(int box[], int count)
{
    int sumi = 0;
    for (int i = 0;i<count;i++)
    {
        sumi+=box[i];
    }
    return sumi;
}

int main() {
    int num[N], i = 0;
    printf("enter the numbers: ");
    for(i;i<N;i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == 0)
        {
            break;
        }
        
    }
    printf("the sum of the given numbers is %d", sum(num, i));
    return 0;
}