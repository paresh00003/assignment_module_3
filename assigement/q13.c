//How many Even numbers are there


#include<stdio.h>

int main()

{
  int oddsum;
  int i;

 for( i=1; i<=50;i++)
  
  {
    printf("%d\n",i);

   if(i%2-1==0)

   {

    oddsum= 1+oddsum;
   }
 

 }
    printf("sum of oddnumber%d\n",oddsum);

}