//x+y whole square

#include <stdio.h>
int main(){

  int x,y,result;

  printf("enter the first value : ");
  scanf(" %d",&x);

  printf("enter the second value : ");
  scanf(" %d",&y);

 result= (x*x+y*y+2*x*y);
    printf("final result is : %d",result);
  
  return 0;
}