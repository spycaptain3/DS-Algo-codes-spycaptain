//Move all the negative elements to one side of the array 
#include<stdio.h>
int main()
{
   int arr[30],i,j,n,temp;
   printf("Enter the size of the array: \n");
   scanf("%d",&n);
   printf("Enter the %d elements in the array: \n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
    for(j=(i+1);j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   printf("array after all negative one side is: \n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",arr[i]);
   }
   return 0;
}