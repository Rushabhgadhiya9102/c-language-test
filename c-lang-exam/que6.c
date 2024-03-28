#include <stdio.h>

struct movie {

    char movie_name[20];
    char genre[20];
    char language[20];

};

int main (){


int n;


printf("\nenter the number of list :");
scanf("%d",&n);

struct movie movie[n];

for(int i=1;i<n;i++)
{
    printf("\nmovie (%d)",i);

    printf("\nenter the name :");
    scanf("%s",movie[i].movie_name);

    printf("\nenter the genre :");
    scanf("%s",movie[i].genre);

    printf("\nenter the language :");
    scanf("%s",movie[i].language);
}

for(int i=1;i<=n;i++)
{
    printf("\nmovie is %s",movie[i].movie_name);
    printf("\nmovie is %s",movie[i].genre);
    printf("\nmovie is %s",movie[i].language);

}
    return 0;
}