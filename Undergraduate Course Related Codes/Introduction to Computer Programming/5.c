#include<stdio.h>
int main()
{
	char str[80]="This is a String\0";
	char *p;
	int i;
      // this loop prints the string
	for(i=0; str[i] ; i++)
      {
        	printf("%c",str[i]);
       }
printf("\n");
/* this does the same thing */
	p=str;
	for(i=0 ; p[i] ; p++)
      {
         printf("%c",p[i]);
       }
	return 0;
}

