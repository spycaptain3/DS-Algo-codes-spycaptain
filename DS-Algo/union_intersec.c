//Find the Union and Intersection of the two sorted arrays.
#include<stdio.h>
int main()
{
    int a[25], b[25],c[51], n,m,t,i,j,u,k;
    printf("Enter the size of the first array: \n");
    scanf("%d",&n);

    printf("Enter the size of the second array: \n");
    scanf("%d",&m);

    printf("Enter the %d elements in the first array: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the %d elements in the second array: \n",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Union of the 1st and 2nd array is: \n");
    k=m+n;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=n;i<k;i++)
    {
        c[i]=b[i-n];
    }
    for(i=0;i<k;i++)
    {
        int temp1=c[i];
        
    }
    return 0;
}