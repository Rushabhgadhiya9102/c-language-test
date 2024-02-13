#include  <stdio.h>
int main(){

int a,b,min;

  printf("enter the value of a :");
  scanf("%d",&a);

  printf("enter the value of b :");
  scanf("%d",&b);

 if(a<b){
   min=a;
 }else{
   min=b;
 }
  printf("the  minimum value is : %d", min);
  return 0;
}