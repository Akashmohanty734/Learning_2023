#include <stdio.h>

struct TimePeriod {
   int hrs;
   int mins;
   int secs;
};

// Calculate the difference between two time periods
struct TimePeriod calculateTimeDifference(struct TimePeriod start, struct TimePeriod end) {
   struct TimePeriod diff;

   // Convert the time periods to seconds
   int startTimeInSeconds = start.hrs * 3600 + start.mins * 60 + start.secs;
   int endTimeInSeconds = end.hrs * 3600 + end.mins * 60 + end.secs;

   // Calculate the difference in seconds
   int diffInSeconds = endTimeInSeconds - startTimeInSeconds;

   // Convert the difference back to hours, minutes, and seconds
   diff.hrs = diffInSeconds / 3600;
   diffInSeconds %= 3600;
   diff.mins = diffInSeconds / 60;
   diff.secs = diffInSeconds % 60;

   return diff;
}

int main() {
   struct TimePeriod start, end, difference;

   printf("Enter the start time period (hours minutes seconds): ");
   scanf("%d %d %d", &start.hrs, &start.mins, &start.secs);

   printf("Enter the end time period (hours minutes seconds): ");
   scanf("%d %d %d", &end.hrs, &end.mins, &end.secs);

   difference = calculateTimeDifference(start, end);

   printf("Difference: %d hours %d minutes %d seconds\n", difference.hrs, difference.mins, difference.secs);

   return 0;
}
