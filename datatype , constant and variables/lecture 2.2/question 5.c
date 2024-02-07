//perimeter of circle

#include <stdio.h>
#define PI 3.14
int main(){

  int radius, perimeter;
  printf("enter the value of radius : ");
  scanf("%d",&radius);

   perimeter = 2*PI*radius;

  printf("the perimeter of circle is : %d",perimeter);

  return 0;
}