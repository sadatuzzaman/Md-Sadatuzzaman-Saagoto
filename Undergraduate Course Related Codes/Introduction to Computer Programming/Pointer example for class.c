#include<stdio.h>
int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int *p;
    p=a;/*assign p the start address of a */
    //this prints first ,second and third element of array
    printf("%d %d %d\n",*p,*(p+1),*(p+2));
    //this does the same thing
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}
