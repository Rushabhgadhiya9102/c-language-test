#include <stdio.h>
#include <math.h>

           // function blueprint

float addition(float a, float b);
float substraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
float modulas(float a,float b);

            //user define function

 float addition(float a, float b)
{
    return a+b;
}
float substraction(float a, float b)
{
    return a-b;
}
float multiplication(float a, float b)
{
    return a*b;
}
float division(float a, float b)
{
    return a/b;
}
float modulas(float a, float b)
{
    return fmod(a,b);
}

            // main function
int main(){

float a, b;
int op ;
char button;

printf("\t\twelcome\n\n");

printf("\tpress 's' to start : ");
scanf("%c",&button);

if(button == 's')
{
while(1)
{
    
     printf("\npress 1 for addition\n");
     printf("press 2 for substraction\n");
     printf("press 3 for multiplication\n");
     printf("press 4 for division\n");
     printf("press 5 for modulas\n");
     printf("press 0 for exit\n");
    
    printf("\nenter the opertator :");
    scanf("%d",&op);

    if(op==0)
     {
        printf("\n\t\tGood bye");
       break;
     }

    printf("\nenter the number :");
    scanf("%f",&a);

    printf("\nenter the number :");
    scanf("%f",&b);
    
    switch(op)
    {
        
        case 1:
        printf("\nthe addition is : %f \n\n",addition(a,b));
        break;

        case 2:
        printf(" \nthe sudstraction is : %f\n\n ",substraction(a,b));
        break;

        case 3:
        printf(" \nthe multiplication is : %f \n\n",multiplication(a,b));
        break;

        case 4:
        printf("\n the division is : %f \n\n",division(a,b));
        break;

        case 5:
        printf(" \nthe modulas is : %f \n\n",modulas(a,b));
        break;

        default:
        printf("Wrong choice");
        break;
  
    }

}
}

    return 0;
}
