#include <stdio.h>

int main(){

  int a,b,c;
  printf("enter the first number : ");
  scanf("%d",&a);

  printf("enter the second number : ");
  scanf("%d",&b);

  c=a;
  a=b;
  b=c;

  printf("the first swapping result is : %d\n",a);
  printf("the second swapping result is : %d\n",b);
 
  return 0;
}
