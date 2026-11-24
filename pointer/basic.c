#include <stdio.h>

int main() {
int i = 265;
int *p = &i;
char *j = (char *)p;

printf("%d \n", *(j+3));
printf("%d", *p);
    return 0;
}