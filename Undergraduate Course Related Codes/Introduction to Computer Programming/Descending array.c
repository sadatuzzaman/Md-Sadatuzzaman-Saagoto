#include<stdio.h>
int main()
{
    int i, j, n, a[100];
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Descending: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
}
