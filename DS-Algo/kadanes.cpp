#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter the "<<n<<" elements in the array: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array after kadane's algo\n";
    int max=0;
    int curn=0;
    for(i=0;i<n;i++)
    {
        curn=curn+arr[i];
        if(curn>max)
        {
            max=curn;
        }
        if(curn<0)
        {
            curn=0;
        }
    }
    cout<<"maximum sub array is: "<<max;
    return 0;
    
}