/*WAP for Bubble Sort
WAP for Insert Sort.
WAP for Selection Sort.
WAP for Merge Sort.
WAP for Quick Sort.*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,j,arr[20];
    cout<<"Enter the size of the array: \n";
    cin>>n;
    cout<<"Enter the "<<n<<" Elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
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
    cout<<"Elements after bubble short \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}