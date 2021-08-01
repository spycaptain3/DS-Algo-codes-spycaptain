/*You don't need to read input or print anything. Your task is to complete 
function minJumps() which takes the array arr and it's size N as input parameters 
and returns the minimum number of jumps. If not possible returns -1. */

#include<iostream>
using namespace std;
int main()
{
    int i,arr[35],n,s,j,count;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    cout<<"Enter the "<<n<<"elements in the array: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    if(arr[0]==0)
    {
        cout<<"can't move to the next step, its invalid.\n";
        goto end;
    }
    s=arr[0];
    for(i=0;i<n;i++)
    {
        if(i==s)
        {
            s=arr[i];
            count++;
        }

    }
    cout<<"Minimum number of jumps is: "<<count<<endl;

    end:;
    return 0;
}