#include <stdio.h>

int  main(){

  int a;
  int b;
  int c;
  int result;
  

  printf("enter the number :");
  scanf("%d",&a);

c = a%10;
 
  while(a>=10)
    {
      a=a/10;
    }

  b=a;
  
  result = b+c;
  printf("result is : %d",result);


  return 0;
}