/*
Write a program using structures to calculate the difference between two time periods using a user-defined function.
*/

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;

    if (end.seconds < start.seconds) {
        end.seconds += 60;
        end.minutes--;
    }
    diff.seconds = end.seconds - start.seconds;

    if (end.minutes < start.minutes) {
        end.minutes += 60;
        end.hours--;
    }
    diff.minutes = end.minutes - start.minutes;

    diff.hours = end.hours - start.hours;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hours);
    printf("Minutes: ");
    scanf("%d", &startTime.minutes);
    printf("Seconds: ");
    scanf("%d", &startTime.seconds);

    printf("Enter the end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hours);
    printf("Minutes: ");
    scanf("%d", &endTime.minutes);
    printf("Seconds: ");
    scanf("%d", &endTime.seconds);

    
    difference = calculateTimeDifference(startTime, endTime);

    printf("\n");
    printf("Time Difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}
