
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("Color 3F");
    int year,month,day,daysinmonth,weekday=0;
    printf("\n Enter your desired Year");
    scanf("%d",&year);
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthdays[]={31,28,31,30,31,30,31,31,30,30,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
    monthdays[1]=29;
    for(month=0;month<12;month++)
    {
        daysinmonth=monthdays[month];
        printf("\n\n-----------------%s----------------\n",months[month]);
        printf("\n   Sun  Mon  Tue  Wed  Thur Fri  Sat\n");

        for(day=1;day<=daysinmonth;day++)
        {
            printf("%5d",day);
            if(++weekday>6)
            {
                printf("\n");
                weekday=0;
        }
}
}
}
