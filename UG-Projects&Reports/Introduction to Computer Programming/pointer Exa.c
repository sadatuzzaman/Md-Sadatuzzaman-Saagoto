#include <stdio.h>
void swap(int *a,int *b);
int main()
{
  int num1=5,num2=10;
  swap(&num1,&num2);
printf("Number1 = %d\n",num1);
  printf("Number2 = %d",num2);
  return 0;
}
void swap(int *a,int *b)
{
int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
