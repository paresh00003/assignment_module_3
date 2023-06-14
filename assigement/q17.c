// WAP to print factorial of given number
 

 #include<stdio.h>

 int main()
 {

    int a,n,fact=1;

    printf("enter number :");
    scanf("%d",&n);

    for(a=1;a<=n;a++)

    fact=fact*a;

    printf("factorial %d %ld\n",n,fact);

 }