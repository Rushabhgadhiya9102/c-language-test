#include  <stdio.h>
int main(){

int a,b,c,result;

  printf ("enter the value of a :");
  scanf ("%d",&a);

  printf ("enter the value of b :");
  scanf ("%d",&b);

  printf ("enter the value of c :");
  scanf("%d",&c);

  result = c<(a<b?a:b)?c:((a<b)?a:b);

  printf("the smallest number is : %d",result);
  
  return 0;
}