#include<stdio.h>


int main()
{
    int a[100], i, x, n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;  i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &x);

    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            printf("Number is found at %d", i+1);
        }
    }
    if(a[i]!=x)
    {
        printf("Number is not found");
    }

}

