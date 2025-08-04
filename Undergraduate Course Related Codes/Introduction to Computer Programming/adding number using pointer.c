#include<stdio.h>
int main()
{
    int m,n,sum, *p, *q;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    p=&m;
    q=&n;
    sum= *p+*q;
    printf("Summation is %d", sum);

}
