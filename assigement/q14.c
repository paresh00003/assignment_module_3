//Sum of even numbers//

#include<stdio.h>

int main ()

{
  
  int evensum;

  for(int i=1;i<=40;i++)
  {

    printf("%d\n",i);

    if(i % 2 ==0)

    {

        evensum = i+evensum;
    }


  }
   printf("sum of even  %d\n",evensum);


}
