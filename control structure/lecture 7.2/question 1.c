//minimum value

#include  <stdio.h>
int main(){

int a,b,c;

  printf ("enter the value of a :");
  scanf ("%d",&a);

  printf ("enter the value of b :");
  scanf ("%d",&b);

  printf ("enter the value of c :");
  scanf("%d",&c);

  if (a<c){
    if(a<b){
      printf ("%d is the smallest number",a);
    }else{
      printf ("%d is the smallest number",b);
    }       
    }else if (b<c){
      printf ("%d is the smallest number",b);
    }else{
      printf ("%d is the smallest number",c);
    }
  
  return 0;
}