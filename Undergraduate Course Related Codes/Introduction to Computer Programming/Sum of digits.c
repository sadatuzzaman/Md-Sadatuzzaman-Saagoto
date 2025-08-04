#include<stdio.h>
 int main()
 {
     int sum=0, remainder, t, n;
     printf("Enter any integer: ");
     scanf("%d", &n);
     t=n;
     while(t!=0)
     {
         remainder= t%10;
         sum= sum + remainder;
         t= t/10;
     }
     printf("Summation of digits of %d is %d", n, sum);
 }
