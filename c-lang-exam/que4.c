#include <stdio.h>

int leapyear(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){

    int year;

printf("enter the year :");
scanf("%d",&year);

if(leapyear(year))
{
    printf("this is the leap year");
}
else{
    printf("this is not leap year");
}

}