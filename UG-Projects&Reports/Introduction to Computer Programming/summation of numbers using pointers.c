#include<stdio.h>
int main()
{
    int a[1000], n, *ptr, i, sum=0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr= a;

    for(i=0; i<n; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("Summation of numbers is: %d", sum);
}
