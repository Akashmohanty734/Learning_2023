#include <stdio.h>

int deletingDigit(int num, int position)
{
   int divisor = 1;
   int deletingNum = 0;

   while (position > 0)
   {
      divisor *= 10;
      position--;
   }

   deletingNum = (num / (divisor * 10)) * divisor + (num % divisor);

   return deletingNum;
}

int largestNumber(int num)
{
   int largestNum = 0;
   int tempNum, i;

   for (i = 0; i < 4; i++)
   {
      tempNum = deletingDigit(num, i);

      if (tempNum > largestNum)
      {
         largestNum = tempNum;
      }
   }

   return largestNum;
}

int main()
{
   int num;
   printf("Enter a 4-digit number: ");
   scanf("%d", &num);

   int largestNum = largestNumber(num);
   printf("The largest number by deleting a single digit: %d\n", largestNum);
   return 0;
}