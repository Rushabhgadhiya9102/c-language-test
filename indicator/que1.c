#include <stdio.h>

int main(){

char name[100];
char *i = name;
int length=0;

printf("enter the string :");
scanf("%[^\n]s",&name);


while(*i!='\0')
{
    length++;
    i++;

}

printf("the length is : %d\n",length);

    return 0;
}