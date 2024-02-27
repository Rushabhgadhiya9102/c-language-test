#include<stdio.h>
int main()
{
  int a,b,c,min;
  printf("enter the value of a:");
  scanf("%d", &a);
  printf("enter the value of b:");
  scanf("%d", &b);
  printf("enter the value of c:");
  scanf("%d", &c);
   if (a < b) {
          if (a < c) {
              min = a;
          } else {
              min = c;
          }
      } else {
          if (b < c) {
              min = b;
          } else {
              min = c;
          }
      }

      printf("Minimum number is: %d", min);

      return 0;
  }
