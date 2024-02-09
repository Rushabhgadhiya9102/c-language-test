//x+y whole cube

#include <stdio.h>
int main(){

  int x,y,result;

  printf("enter the first value : ");
  scanf(" %d",&x);

  printf("enter the second value : ");
  scanf(" %d",&y);

   result= (x*x*x+3*x*x*y+3*x*y*y+y*y*y);


    printf("final result is : %d",result);
  
  return 0;
}