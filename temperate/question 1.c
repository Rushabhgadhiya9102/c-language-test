#include <stdio.h>

int main(){

  char alpha = 'A';

  do {

    printf("%c, ",alpha);
    alpha=alpha+4;
    
  }while(alpha <= 'Z');

  return 0;  
}