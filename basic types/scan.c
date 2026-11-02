#include <stdio.h>

int main() {
    char a = 'a';
    int i = 1;
    printf("enter any thing: ");
    while(a != '\n')
    {
        scanf("%c", &a);
        printf("sequence %d :%c \n", i, a);
        i+=1;
        
    }
    return 0;
}


