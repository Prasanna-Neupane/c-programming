#include <stdio.h>

int display(int class[], int n);
int sum(int class[], int n);
int modify(int class[], int n);
int max(int class[], int n);

int main()
{
    int count;
    printf("How many numbers do you want to enter: ");
    scanf("%d", &count);

    int box[count];

    printf("enter the numbers: ");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &box[i]);
    }

    display(box, count);
    sum(box, count);
    max(box, count);
    modify(box, count);
    return 0;
}

int display(int class[], int n)
{
    printf("entered number: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", class[i]);
    }
    printf("\n");
    
}

int sum(int class[], int n)
{
    int sumi = 0;
    for (int i = 0; i < n; i++)
    {
        sumi += class[i];
    }
    printf("the sum of the given number is %d \n", sumi);
    
}

int max(int class[], int n)
{
    int max = class[0];
    for (int i = 0; i < n; i++)
    {
        if (max < class[i])
        {
            max = class[i];
        }
    }
    printf("the maximum number is %d", max);
    
}

int modify(int class[], int n)
{
    printf("\n");
    printf("enter the new numbers replacing the original: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &class[i]);
    }

    display(class, n);
    sum(class, n);
    max(class, n);
    
}