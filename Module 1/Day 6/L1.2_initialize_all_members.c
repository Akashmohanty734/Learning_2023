#include <stdio.h>
#define MAX_STUDENTS 5


// Student structure type declaration
struct student 
{
    char    name[100];
    int     roll;
    float   marks;
};


int main()
{
    // Declare array of structure variables
    struct student stu[MAX_STUDENTS];
    int i;

    // Read all 5 student details from user
    printf("Enter %d student details\n", MAX_STUDENTS);
    for ( i = 0; i < MAX_STUDENTS; i++ )
    {
        printf("Student %d name: ", (i + 1));
        gets(stu[i].name);

        printf("Student %d roll no: ", (i + 1));
        scanf("%d", &stu[i].roll);

        printf("Student %d marks: ", (i + 1));
        scanf("%f", &stu[i].marks);
        getchar();  // <-- Eat extra new line character

        printf("\n");
    }

    

    // Print all student details
    printf("\n\nStudent details\n");
   
    for ( i = 0; i < MAX_STUDENTS; i++ )
    {
        printf("Name : %s\n",   stu[i].name);
        printf("Roll : %d\n",   stu[i].roll);
        printf("Marks: %.2f\n", stu[i].marks);
        printf("\n");
    }
    
    return 0;
}