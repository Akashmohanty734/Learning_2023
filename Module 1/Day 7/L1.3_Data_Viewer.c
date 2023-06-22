#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Structure to store each log entry
typedef struct {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
} LogEntry;

void read_logs_from_csv(LogEntry logs[], int* numEntries) {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    // Skip the header line
    char line[100];
    fgets(line, sizeof(line), file);

    *numEntries = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        LogEntry logEntry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &logEntry.entryNo, logEntry.sensorNo,
               &logEntry.temperature, &logEntry.humidity, &logEntry.light, logEntry.timestamp);
        logs[*numEntries] = logEntry;
        (*numEntries)++;
    }

    fclose(file);
}

void display_logs(LogEntry logs[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < numEntries; i++) {
        LogEntry logEntry = logs[i];
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", logEntry.entryNo, logEntry.sensorNo,
               logEntry.temperature, logEntry.humidity, logEntry.light, logEntry.timestamp);
    }
}

int main() {
    LogEntry logs[MAX_ENTRIES];
    int numEntries = 0;

    read_logs_from_csv(logs, &numEntries);
    display_logs(logs, numEntries);

    return 0;
}