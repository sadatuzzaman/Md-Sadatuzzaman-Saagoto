#include <stdio.h>
int main()
{
  int i, class[6], sum=0;
  printf("Enter 6 numbers:\n");
  for(i=0;i<6;++i)
    {
      scanf("%d",(class+i)); // (class+i) is equivalent to &class[i]
      sum += *(class+i); // *(class+i) is equivalent to class[i]
  }
  printf("Sum=%d",sum);
  return 0;
}
