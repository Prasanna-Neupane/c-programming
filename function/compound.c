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
    printf("the sum of the given numbers is %d", sum((int[]){3,5,2,4,6}, 5));
    return 0;
}