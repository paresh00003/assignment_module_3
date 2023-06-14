//WAP to take 10 no. Input from user and find out …

#include<stdio.h>

int main()

{

  int evensum;

  for(int i=1; i<=20; i++)
  {

   printf("%d\n",i);

  if(i % 2==0)
   {
     evensum=1+evensum;
   }
  }
    printf("the sum of even  :%d\n",evensum);
  
}