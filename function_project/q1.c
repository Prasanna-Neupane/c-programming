// Write a program that asks the user to enter a series of integers (which it stores in an array),
// then sorts the integers by calling the function selection_sort. When given an array
// with n elements, selection_sort must do the following:
// 1. Search the array to find the largest element, then move it to the last position in the array.
// 2. Call itself recursively to sort the first n – 1 elements of the array.

#include <stdio.h>
void selection_sort(int N, int box[N]);
void main()
{
    int count;
    printf("enter the number of digits to store. ");
    scanf("%d", &count);
    int num[count];
    printf("\n enter the numbers to be sorted: ");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    selection_sort(count, num);
    printf("In order: ");
    for(int i = 0;i< count;i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}

void selection_sort(int N, int box[N])
{
    int dum = box[0];

    
    
    if (N == 1)
    {
        return;
    }

    else if (N != 1)
    {
        for (int i = 0; i < N; i++)
        {
            if (box[i] > dum)
            {
                dum = box[i];
            }
        }
        
        for (int i = 0;i<N;i++)
        {
            if(dum == box[i])
            {
                box[i] = box[N-1];
                box[N-1] = dum;
            }
        }
        selection_sort(N - 1, box);
    }
}