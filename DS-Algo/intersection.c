//Find the intersection of the two array.

#include<stdio.h>
int main()
{
    int arr1[25],arr2[25],arr3[50],i,j,k,n,m,t;
    printf("Enter the size of the first array: \n");
    scanf("%d",&n);
    printf("Enter the size of the 2nd array: \n");
    scanf("%d",&m);
    printf("Enter the %d elements in the first array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the %d elements in the second array: \n",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("skiping repete of the both the array is: \n");
    for(i=0;i<n;i++)
    {
        int temp=arr1[i];
        for(j=i+1;j<n;j++)
        {
            if(temp==arr1[j])
            {
                for(k=j;k<n;k++)
                {
                    arr1[k]=arr1[k+1];
                }

            }
        }

    }
    for(i=0;i<m;i++)
    {
        int temp=arr2[i];
        for(j=i+1;j<m;j++)
        {
            if(temp==arr2[j])
            {
                for(k=j;k<m;k++)
                {
                    arr2[k]=arr2[k+1];
                }

            }
        }

    }
    printf("1st array after :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
     printf("\n2nd array after :\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("Intersection of both the array is :\n");
    for()

    return 0;
}    