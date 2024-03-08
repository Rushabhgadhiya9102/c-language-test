#include <stdio.h>


            //user define function

int addtion(int a, int b)
{
    return a+b;
}
int substraction(int a, int b)
{
    return a-b;
}
int multiplication(int a, int b)
{
    return a*b;
}
int division(int a, int b)
{
    return a/b;
}
int modulas(int a, int b)
{
    return a%b;
}

            // main function
int main(){

int a, b;
int op;

printf("press 1 for addition\n");
printf("press 2 for substraction\n");
printf("press 3 for multiplication\n");
printf("press 4 for division\n");
printf("press 5 for modulas\n");
printf("press 6 for quit\n");

while(1)
{

    printf("\nenter the opertator :");
    scanf("%d",&op);

    if(op==6)
     {
       break;
     }

    printf("\nenter the number :");
    scanf("%d",&a);

    printf("\nenter the number :");
    scanf("%d",&b);
    
    switch(op)
    {
        
        case 1:
        printf("\nthe addition is : %d \n",addtion(a,b));
        break;

        case 2:
        printf(" \nthe sudstraction is : %d\n ",substraction(a,b));
        break;

        case 3:
        printf(" \nthe multiplication is : %d \n",multiplication(a,b));
        break;

        case 4:
        printf("\n the division is : %d \n",division(a,b));
        break;

        case 5:
        printf(" \nthe modulas is : %d \n",modulas(a,b));
        break;

        default:
        printf("invalid ");
        break;
  
    }

}

    return 0;
}