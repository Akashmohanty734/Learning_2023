// Compute Total seconds in a string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getTotalSeconds(const char* timeStr) {
    int hours, minutes, seconds;
    sscanf(timeStr, "%d:%d:%d", &hours, &minutes, &seconds);    // sscanf reads formatted input from a string.

    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}

int main() {
    char timeStr[] = "12:34:56";

    int totalSeconds = getTotalSeconds(timeStr);
    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
