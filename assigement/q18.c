// WAP to print Fibonacci series up to given numbers

#include <stdio.h>
int main() 

{
  int t1 = 0, t2 = 1, sum=0, n;
  
  printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);
  sum = t1 + t2;

  while (sum <= n) 
  {
    printf("%d, ", sum);
    t1 = t2;
    t2 = sum;
    sum = t1 + t2;
  }
}
