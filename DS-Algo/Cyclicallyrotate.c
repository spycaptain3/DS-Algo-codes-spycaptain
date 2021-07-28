//Cyclically rotate an array by one

/*#include<stdio.h>
int main()
{
    int arr[25],i,j,temp,k,n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array: \n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nAfter Cyclically rotate this array by one: \n");
    for(i=n;i>0;i--)
    {
        arr[0]=arr[n+1];
       arr[i+1]=arr[i];
    }
    arr[1]=arr[0];
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int arr[25],i,j,temp,k,n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    
    for(i=n-1;i>=0;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[0]=temp;

    printf("\nAfter Cyclically rotate this array by one: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}