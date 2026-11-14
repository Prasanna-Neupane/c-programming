#include <stdio.h>
#include<math.h>
int main() {
    int bit, val = 0;   
    printf("enter the bit: ");
    scanf("%d", &bit);
    for(int i = 0;i<bit; i++)
    {
        val = val+pow(2,i);
    }
    printf("Total possible numbers: %d", val);
    return 0;
} 