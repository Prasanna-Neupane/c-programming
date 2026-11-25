#include <stdio.h>
int change(int *p){
    *p = 400;
}
int main() {
// in function 

    int a = 10;
    change(&a);
    printf("%d", a);
    return 0;
}