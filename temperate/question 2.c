#include <stdio.h>

int  main(){

  int a,b=0;  

  printf("enter the number :");
  scanf("%d",&a);

  while(a!=0)
    {
      a=a/10;
      b++;
    }
  printf("the result is %d",b);

  return 0;
}
