#include<stdio.h>
int main()
{
    int i, n, j, k, a[100];
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    printf("Ascending \n");
    for(i=0; i<n; i++)
    {
        printf("%d", &a[i]);
    }
}
