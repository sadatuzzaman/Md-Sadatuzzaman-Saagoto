#include <stdio.h>
int main()
{
   char c[4];
   int i;
   for(i=0;i<4;++i)
   {
      printf("Address of c[%d]=%p\n",i,&c[i]);
   }
   return 0;
}

