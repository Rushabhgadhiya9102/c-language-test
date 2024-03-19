#include <stdio.h>

struct students{

    int rn;
    char name[50];
    int chem;
    int maths;
    int physics;
};


int main(){

struct students students[5];

float percentage(int total_marks)
{
    return(float)total_marks/300*100;
}

  for(int i=0 ; i<5 ; i++)
  {
     printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll no : ");
        scanf("%d",&students[i].rn);

        printf("Name : ");
        scanf("%s",&students[i].name);

        printf("Chemistry : ");
        scanf("%d", &students[i].chem);

        printf("Mathematics : ");
        scanf("%d", &students[i].maths);

        printf("Physics : ");
        scanf("%d", &students[i].physics);
    }
    printf("\nOutput:\n\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("%s (%d)\n", students[i].name, students[i].rn);

        printf("Chemistry => %d\n", students[i].chem);

        printf("Mathematics => %d\n", students[i].maths);

        printf("Physics => %d\n", students[i].physics);

        int total_marks = students[i].chem + students[i].maths + students[i].physics;

        printf("Total => %d/300\n", total_marks);

        printf("Percent => %.2f%%\n\n", percentage(total_marks));
 }
  

    return 0;
}