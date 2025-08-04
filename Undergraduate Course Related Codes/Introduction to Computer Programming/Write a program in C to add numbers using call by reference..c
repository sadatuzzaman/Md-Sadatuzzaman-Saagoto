#include <stdio.h>
int addTwoNumbers(int *, int *);

int main()
{
   int x, y, *ptr, *qtr, sum;

   printf("\n\n Pointer : Add two numbers using call by reference:\n");
   printf("-------------------------------------------------------\n");

   printf(" Input the first number : ");
   scanf("%d", &x);
   printf(" Input the second  number : ");
   scanf("%d", &y);
   sum = addTwoNumbers(&x, &y);
   printf(" The sum of %ld and %ld  is %ld\n\n", x, y, sum);
   return 0;
}
int addTwoNumbers(int*n1, int *n2)
{
   int sum;
   sum = *n1 + *n2;
   return sum;
}
