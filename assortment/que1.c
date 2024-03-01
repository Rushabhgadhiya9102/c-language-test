#include <stdio.h>

int main() {
    int arr[1000];
    int i,n;
    
    printf("enter the size of array :");
    scanf("%d",&n);
    
    // printf("enter the number of element :");
    for(i=0;i<n;i++)
    {
        printf("enter the number of element :");
        scanf("%d",&arr[i]);
    }
    
     printf("The Negative Element In Array Is ");
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d\t",arr[i]);
        }
    }
   
    return 0;
}