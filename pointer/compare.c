#include <stdio.h>

void compare(int count, int box[],int *mini,int *maxi){
    *mini = *maxi = box[0];
    for (int i = 0; i<count; i++)
    {
        if(box[i] > *maxi)
        {
            *maxi = box[i];
        }
        if(box[i]< *mini)
        {
            *mini = box[i];
        }
    }
}


int main() {
    int n, min, max;
    printf("How many numbers do you want to compare: ");
    scanf("%d",&n);
    int nums[n];
    printf("\nEnter the numbers: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }

    compare(n, nums, &min, &max);

    printf("The maximum value is %d \n", max);
    printf("The minimum value is %d", min);
    
    return 0;
}