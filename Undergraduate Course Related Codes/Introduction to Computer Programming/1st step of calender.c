#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("Color 3F");
    int year,month;
    printf("\n Enter your desired Year");
    scanf("%d",&year);
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(month=0;month<12;month++)
    {
        //daysinmonth=monthdays[month];
        printf("\n\n-----------------%s----------------\n",months[month]);
        printf("\nSun  Mon  Tue  Wed  Thu Fri  Sat\n");
        }
}
