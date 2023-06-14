//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
//82746


#include<stdio.h>

int main() 
{

  int n, a = 0, b;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) 
  {
    b = n % 10;
    a = a * 10 + b;
    n /= 10;
  }

  printf("Reversed number = %d", a);

}