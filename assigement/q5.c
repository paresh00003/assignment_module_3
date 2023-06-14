/*WAP to check if the given year is a leap year or not.*/

#include<stdio.h>

int main()

{

  int year;

  printf("enter year %d",year);
  scanf("%d",& year);

  
  if(year%4==0)
      
      {
         if(year%100==0)
         {
            if (year%400==0)
            {
                printf("%d year is leap year",year);
            }
            printf("%d is not leap year",year);
         }
         printf("%d is leap year",year);

      }else
   {
    printf("%d year is not leap year", year);
   }


}