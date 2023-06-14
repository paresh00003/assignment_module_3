//WAP to swap two numbers without using third variable//

#include<stdio.h>

int main()

{
   
   int m=30;
     int n=20;

     printf("the value of m is %d\n",m);
     printf("the value of n is %d\n",n);
    
     m=m+n;
     n=m-n;
     m=m-n;

     printf("the value of m is %d\n",m);
     printf("the value of n is %d\n",n);


}