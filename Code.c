#include <stdio.h>

int main() {
    int time, hours, minutes, seconds; 

    printf("Enter the time in minutes please : ");
    scanf("%d", &time);

    if (time % 60 == 0) {
        hours = time / 60;
        printf("%d minutes is %d hours.", time, hours);
    } else {
        hours = time / 60;
        minutes = time % 60;
        seconds = minutes * 60;
        printf("%d minutes is %d hours and %d minutes.", time, hours, minutes);
    }

}