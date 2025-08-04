#include<stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
      return n*fact(n-1);
    }
}

int main()
{
    int n, factorial;
    printf("Enter any positive integer: ");
    scanf("%d", &n);

    factorial= fact(n);
    printf("Factorial of the given number: %d", factorial);

}

