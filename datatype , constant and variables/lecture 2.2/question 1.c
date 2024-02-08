//area of circle

#include <stdio.h>
int main(){

  int radius, area;
  printf("enter the number of radius : ");
  scanf("%d",&radius);

  area = 3.14*radius*radius;

  printf("the area of circle is : %d",area);

  return 0;
}
