#include <stdio.h>
#include<time.h>
int main() {
    typedef time_t tome;
    tome t = time(NULL);
    printf("The current time: %d", t);
    return 0;
}