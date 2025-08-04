#include <stdio.h>
int main(){
  int var=5;
  printf("Value: %d\n",var);
  printf("Address: %d",&var);  //Notice, the ampersand(&) before var.
  return 0;
}

