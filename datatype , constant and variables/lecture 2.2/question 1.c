//area of circle

#include <stdio.h>
#define PI 3.14
int main(){

  int radius, area;
  printf("enter the number of radius : ");
  scanf("%d",&radius);

  area = PI*radius*radius;

  printf("the area of circle is : %d",area);

  return 0;
}