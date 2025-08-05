#include<stdio.h>
void main()
{
    int a=10,b=20;

    printf("before swap the value is %d and %d",a,b);

    swap(&a,&b);
       printf("\nbefore swap the value is %d and %d",a,b);



}
void swap(int* x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

    //printf("\nbefore swap the value is %d and %d",x,y);
}
