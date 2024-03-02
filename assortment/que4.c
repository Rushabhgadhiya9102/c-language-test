#include <stdio.h>

 int main() {

     int a, b;
     printf("enter the number of rows :");
     scanf("%d",&a);

     printf("enter the number of columns :");
     scanf("%d",&b);

     int arr[a][b];
    
     for (int i=0;i<a;i++)
     {
         for(int j=0;j<b;j++)
         {
             printf("enter the element of (%d,%d) : ",i,j);
             scanf("%d",&arr[i][j]);
         }
     }

     printf("\narray\n");
     for (int i=0;i<a;i++)
       {
         for(int j=0;j<b;j++)
           {
             printf("%d ",arr[i][j]);
           }
         printf("\n");
       }

   int r,c;
   int sumrow=0;
   int sumcol=0;

   printf("enter the number of rows :");
   scanf("%d",&r);

   printf("enter the number of columns :");
   scanf(" %d",&c);

   for(int i=0;i<a;i++)
     {
       for(int j=0;j<b;j++)
       {
       if (j==c-1) 
       {
         sumcol+=arr[i][j];
       }
       if(i==r-1)
       {
         sumrow+=arr[i][j];
       }
       }
     }
   printf("column is %d\n",sumcol);
   printf("rows is %d\n",sumrow);    

     return 0;
 }
