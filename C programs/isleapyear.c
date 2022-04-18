#include <stdio.h>

int main() 
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // is leap year if divisible by 400
   if (year % 400 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   // not leap year if divisible by 100 but not by 400
   else if (year % 100 == 0) 
   {
      printf("%d is not a leap year.", year);
   }
   // is leap year if not divisible by 100 but by 4
   else if (year % 4 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   // not leap years
   else 
   {
      printf("%d is not a leap year.", year);
   }

   return 0;
}