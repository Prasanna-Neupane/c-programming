#include <stdio.h>
#define row 10
#define col 10
int main()
{
    typedef int array;

    array box[row][col];
    int num = 1;
    for (int i = 0; i < row; i++)
    {
        for(int j= 0; j< col; j++)
         {
            box[i][j] = num;

            printf("%d\t",box[i][j]);
            num++;
         }
         printf("\n");
    }

    
    return 0;
}