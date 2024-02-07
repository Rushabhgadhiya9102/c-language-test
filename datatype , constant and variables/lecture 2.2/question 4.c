//simple intrest

#include <stdio.h>

int main(){

  int a, b, c, SI;
  printf("enter the value of a : ");
  scanf("%d",&a);

  printf("enter the value of b : ");
  scanf("%d",&b);

  printf("enter the value of c : ");
  scanf("%d",&c);


   SI = (a*b*c)/100;

  printf("the amount is : %d",SI);

  return 0;
}