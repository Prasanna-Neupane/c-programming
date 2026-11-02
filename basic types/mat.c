#include <stdio.h>

int main() {
    printf("generally characters can be read and write by getchar and putchar instead of printf and scanf");
    char hi;
    printf("\n enter a word: ");
    hi = getchar();
    printf("the word: %c", hi);
    
    return 0;
}