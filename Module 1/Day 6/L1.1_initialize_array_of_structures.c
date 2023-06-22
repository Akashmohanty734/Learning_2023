#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* str, struct Student* students, int numStudents) {
    char temp[20];
    int i = 0;
    int index = 0;

    while (sscanf(str + index, "%d %[A-Za-z] %f", &students[i].rollno, temp, &students[i].marks) == 3) {
        strcpy(students[i].name, temp);
        i++;
        index += strcspn(str + index, " \n") + 1;  // Move the index to the next token
    }
}

int main() {
    int numStudents = 3;
    struct Student students[numStudents];
    char str[100];

    printf("Enter student details: ");
    fgets(str, sizeof(str), stdin);

    parseString(str, students, numStudents);

    printf("\nStudent details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
