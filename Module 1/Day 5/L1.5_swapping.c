#include <stdio.h>
#include <string.h>

// Structure definition
struct Person
{
   char name[50];
   float score;
};

// Swap the fields of two structures
void swap(struct Person *p1, struct Person *p2)
{
   struct Person temp;
   strcpy(temp.name, p1->name);
   temp.score = p1->score;

   strcpy(p1->name, p2->name);
   p1->score = p2->score;

   strcpy(p2->name, temp.name);
   p2->score = temp.score;
}

int main()
{
   // Create two Person structures
   struct Person personA, personB;

   // Read personA data
   printf("Enter details of personA:\n");
   printf("Name: ");
   fgets(personA.name, sizeof(personA.name), stdin);
   personA.name[strcspn(personA.name, "\n")] = '\0'; // Remove newline character
   printf("Score: ");
   scanf("%f", &personA.score);
   getchar(); // Clearing the newline character from input buffer

   // Read personB data
   printf("\nEnter details of personB:\n");
   printf("Name: ");
   fgets(personB.name, sizeof(personB.name), stdin);
   personB.name[strcspn(personB.name, "\n")] = '\0';
   printf("Score: ");
   scanf("%f", &personB.score);

   // Print the initial details
   printf("\nInitial details:\n");
   printf("personA: Name = %s, Score = %.2f\n", personA.name, personA.score);
   printf("personB: Name = %s, Score = %.2f\n", personB.name, personB.score);

   // Swapping persons
   swap(&personA, &personB);

   // Print the swapped details
   printf("\nAfter swapping:\n");
   printf("personA: Name = %s, Score = %.2f\n", personA.name, personA.score);
   printf("personB: Name = %s, Score = %.2f\n", personB.name, personB.score);

   return 0;
}
