#include<stdio.h>
#include<stdlib.h>
int get_1st_weekday(int year)

{int day;
day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
return day;
}
int main()

{
    system("Color 3F");
    int year,month,day,daysinmonth,weekday=0,startingday;
    printf("\n Enter your desired Year");
    scanf("%d",&year);
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthdays[]={31,28,31,30,31,30,31,31,30,30,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
    monthdays[1]=29;

    startingday=get_1st_weekday(year);
    //printf("%d",startingday);
    for(month=0;month<12;month++)
    {
        daysinmonth=monthdays[month];
        printf("\n\n-----------------%s----------------\n",months[month]);
        printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
       for (weekday=0;weekday<startingday;weekday++)

        printf("abcde");

}
}
