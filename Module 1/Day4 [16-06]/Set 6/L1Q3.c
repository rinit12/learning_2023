/*
    Compute Total Seconds
*/

#include <stdio.h>
#include <stdlib.h>

int calculateTotalSeconds(const char* timeStr) {
    int hours, minutes, seconds;
    sscanf(timeStr, "%d:%d:%d", &hours, &minutes, &seconds);

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    return totalSeconds;
}

int main() {
    char timeStr[100];

    printf("Enter the time (hh:mm:ss): ");
    fgets(timeStr, sizeof(timeStr), stdin);

    int totalSeconds = calculateTotalSeconds(timeStr);

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
