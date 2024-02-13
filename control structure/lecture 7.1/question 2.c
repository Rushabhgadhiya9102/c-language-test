#include <stdio.h>

 int main(){

   int a;

   printf("enter the value of a :");
   scanf("%d",&a);

    if (a<0){
      printf("the value is negative",a);
    }else if(a>0){
      printf("the value is positive",a);
    }else {
      printf("the value is neutral",a);
    }
   return 0;
 }