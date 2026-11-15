#include <stdio.h>
#include<time.h>
#define n 1000000000LL
int main() {
    printf("to count upto the billion. ");
    time_t one, two;
    long long int value = 0;
    one = time(NULL);
    printf("the starting time is %d \n", one);
    for(int i = 0;i<n;i++)
    {
        value+=1;
    }
    two = time(NULL);
    printf("It has been repeated %d time \n", value);
    printf("time: %d", time);
    
    return 0;
}