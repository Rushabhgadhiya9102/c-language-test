#include <stdio.h>

int  main(){

  int a;
  int b = 0;
  int c = 1;
  

  printf("enter the number :");
  scanf("%d",&a);

  while(a>0)
    {
      b=a%10;
      a=a/10;
      b=c++;
    }
  printf("the result is %d",b);

  return 0;
}