#include <stdio.h>

void swap(int *a, int*b)
{
    int
     c =*a;
    *a=*b;
    *b=c;


}

int main (){

    int num1,num2;

    printf("enter the first number :");
    scanf("%d",&num1);

    printf("enter the second number :");
    scanf("%d",&num2);
    
    swap(&num1,&num2);

    printf("after swapping : num1 = %d \n",num1);

    printf("after swapping : num2 = %d\n",num2);
    
  return 0; 
}