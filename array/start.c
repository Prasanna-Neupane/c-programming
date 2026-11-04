#include <stdio.h>
#define s 10
int main() {
    typedef int array;
    array a[s];
    char c = 'a';
    for(int i =0;i<10;i++)
    {
        a[i] = c;
        printf("the value of a[%d]: %c \n", i, a[i]);
        ++c;
    }


    array p[3] = {[1]=56};
    int n = 0;
    while(n<3)
    {
        printf("\n %d", p[n]);
        n++;
    }
    return 0;
}