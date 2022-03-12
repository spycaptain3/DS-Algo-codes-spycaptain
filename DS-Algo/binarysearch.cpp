#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch (int arr[],int n,int num)
{
    int l=0, r=n-1;
    while(l<=r)
    {
       int mid=(l+r)/2;

       if(arr[mid]==num)
       {
           return mid;
           goto end;
       }
       if(arr[mid]>num)
       {
           r=mid-1;
       }
       if(arr[mid]<num)
       {
           l=mid+1;
       }
    }
return -1;
end: ;
}

int main()
{
  int arr[50],num,n,ans;
  cout<<"Enter the size of the array:\n";
  cin>>n;
  cout<<"Enter the "<<n<<" elements in the array:\n";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
   sort(arr,arr + n);
   cout<<"Enter the element to search:\n";
   cin>>num;

ans = binarySearch(arr,n,num);
if(ans==(-1))
{
    cout<<"Element is not present in this array.\n";
}
else{
cout<<"Element is present in the array.\n";
}


   return 0;

}
