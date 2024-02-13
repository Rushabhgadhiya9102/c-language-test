//maximum number

#include  <stdio.h>
int main(){

int a,b,c,d;

  printf ("enter the value of a :");
  scanf ("%d",&a);

  printf ("enter the value of b :");
  scanf ("%d",&b);

  printf ("enter the value of c :");
  scanf("%d",&c);

  printf ("enter the value of d :");
  scanf("%d",&d);

  if (a>d){
    if(a>b){
      printf ("%d is the biggest number",a);
    }else{
      printf ("%d is the biggest number",b);
    }       
    }else if (b>d){
      printf ("%d is the biggest number",b);
    }else if(b>c){
      printf ("%d is the biggest number",c);
    }else{
      printf ("%d is the biggest number",d);
    }
  
  return 0;
}