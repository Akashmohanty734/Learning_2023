#include <stdio.h>
#include <string.h>

struct Student {
  char studentName[20];
  int studentID;
  float studentMarks;
};

void displayStudents(struct Student* students, int numStudents) {
  for (int i = 0; i < numStudents; i++) {
    printf("Student %d:\n", i + 1);
    printf("Name: %s\n", students[i].studentName);
    printf("ID: %d\n", students[i].studentID);
    printf("Marks: %.2f\n", students[i].studentMarks);
  }
}

int main() {
  struct Student students[3];
  strcpy(students[0].studentName, "John ");
  students[0].studentID = 12345;
  students[0].studentMarks = 98.5;
  strcpy(students[1].studentName, "Jane ");
  students[1].studentID = 67890;
  students[1].studentMarks = 89.2;
  strcpy(students[2].studentName, "Michael ");
  students[2].studentID = 34567;
  students[2].studentMarks = 78.1;

  displayStudents(students, 3);

  return 0;
}
