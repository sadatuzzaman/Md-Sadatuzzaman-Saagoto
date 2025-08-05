#include<stdio.h>
int sum(int n)
{
     if(n!=0)
        return n+ sum(n-1);
     else
        return n;
}
int main()
{
    int n,i, add;
    printf("Enter the number: ");
    scanf("%d", &n);
    sum( n);
    printf("Summation of the first %d natural number is %d", n, sum( n));
}
