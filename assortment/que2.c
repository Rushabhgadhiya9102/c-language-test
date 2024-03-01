#include <stdio.h>
#include <math.h>

int main() {

    int row, col;
    printf("enter the number of rows :");
    scanf("%d",&row);

    printf("enter the number of columns :");
    scanf("%d",&col);
  
    int arr[row][col];
    printf("enter the element of the 2d array :\n");
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int max = -INFINITY;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf("the largest element is array is :%d\n ",max);

    return 0;
}