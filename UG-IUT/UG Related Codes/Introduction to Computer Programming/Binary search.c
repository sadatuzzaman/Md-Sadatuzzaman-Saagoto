#include<stdio.h>
int main()
{
    int a[100], n, i, x, mid, left, right;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &x);

    left=0;
    right= n-1;

    while(left<=right)
    {

mid=(left+right)/2;
        if(a[mid]==x)
        {
            printf("%d is found at position %d",x,mid+1);
            break;
        }
        else if(a[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
}
