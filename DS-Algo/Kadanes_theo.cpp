//Kadane's theorem
//find Largest sum contiguous Subarray [V. IMP]
#include<iostream>
using namespace std;
int main()
{
    int i,n,j,max,curr,arr[25];
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the "<<n<<"elements in the array: \n";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=0;
    curr=0;
    int max2=arr[0];
    //for all negative 
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            goto pos;
        }
        else{
            if(arr[i]>max2)
            {
                max2=arr[i];
            }
            
        }
    }
    cout<<"Ans is :"<<max2<<endl;
    goto end;
    pos:
    for(i=0;i<n;i++)
    {
        curr=curr+arr[i];
        if(curr>max)
        {
            max=curr;
        }
        if(curr<0)
        {
            curr=0;
        }                                  
    }
    cout<<"Largest sum of contiguous sum of array is :\n"<<max;
   end:
    return 0;
}