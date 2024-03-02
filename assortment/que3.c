#include <stdio.h>

int main() {

    int a, b;
    printf("enter the number of rows :");
    scanf("%d",&a);

    printf("enter the number of columns :");
    scanf("%d",&b);

    int arr[a][b];
    printf("enter the element of the matrix :\n");
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\noriginal matrix\n");
    for (int i=0;i<a;i++)
      {
        for(int j=0;j<b;j++)
          {
            printf("%d ",arr[i][j]);
          }
        printf("\n");
      }

    printf("transpose matrix :\n");
    for (int i=0;i<b;i++)
      {
        for(int j=0;j<a;j++)
          {
            printf("%d ",arr[j][i]);
          }
        printf("\n");
      }

    return 0;
}
