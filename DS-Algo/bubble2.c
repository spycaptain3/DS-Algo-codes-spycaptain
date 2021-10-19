#include<stdio.h>
int main()
{
    int n,i,temp,j,arr[20];
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the %d Elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    /*for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
           if(arr[j]>arr[j+1])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
        }
    } */

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Elements after bubble short \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}