#include <stdio.h>

int main(void) { 
  
int Bs;
int HRA;
int TA;
int DA;

  printf("enter your number :");

  scanf("%d\n%d\n%d\n%d",&Bs,&HRA,&TA,&DA);
  printf("\n your salary is : %d",Bs+HRA+DA+TA);

  return 0;
}