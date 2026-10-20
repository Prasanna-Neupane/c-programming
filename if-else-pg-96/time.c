// Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
// form:
// Enter a 24-hour time: 21:11
// Equivalent 12-hour time: 9:11 PM
// Be careful not to display 12:00 as 0:00.

#include <stdio.h>

int main() {
    int hour, minute;
    printf("enter 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if(hour == 0){
        printf("Equivalent 12-hour time: %d:%d AM", 12-hour, minute);
    }
    else if(hour<12){
        printf("Equivalent 12-hour time: %d:%d AM", hour, minute);
    }
    else if(hour==12){
        printf("Equivalent 12-hour time: %d:%d PM", hour,minute);
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%d PM", hour-12, minute);
    }
    return 0;
}