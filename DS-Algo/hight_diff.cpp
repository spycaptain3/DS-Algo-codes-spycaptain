/*You don't need to read input or print anything. 
Your task is to complete the function getMinDiff() which takes the arr[],
 n and k as input parameters and returns an integer denoting the minimum difference*/

 #include<iostream>
 using namespace std;
 int main()
 {
     int arr[25],n,k,i,j,max,min,h;
     cout<<"Enter the size of the array: \n";
     cin>>n;
     cout<<"Enter the "<<n<<"elements in the array:\n";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"Enter the value of k :\n";
     cin>>k;
     
     max=arr[0];
     min=arr[0];
     
     for(i=0;i<n;i++)
     {
         if(arr[i]<(-k))
         {
             cout<<"Your Enter value is invalid.\n";
             goto end;
         }
         if(arr[i]>max)
         {
             max=arr[i];
         }
         if(arr[i]<min)
         {
             min=arr[i];
         }     
     }
     cout<<"Minimum difference b/w lagest tower and smallest tawer is: \n";
     h=(max-k)-(min+k);
     cout<<h<<endl;
     end:
     return 0;
 }