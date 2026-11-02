#include <stdio.h>

int main() {
    unsigned int i;
    char ch;
    printf("enter a number: ");
    scanf("%d", &i);

    while(getchar()!= '\n');
    
    printf("enter a character: ");
    scanf("%c", &ch);
    while(ch!='\n')
    {
        printf("\n char: %c", ch);
        ch = getchar();
    }
    printf("\nthe number is %d", i);

    return 0;
}