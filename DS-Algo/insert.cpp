/*WAP for Insert Sort.
WAP for Selection Sort.
WAP for Merge Sort.
WAP for Quick Sort.*/
#include<iostream>
using namespace std;
int main()
{
    int number, r,count,temp,sum;
    cin>>number;
    temp=number;
    
    while(number>0){
        r=number%10;
       if(r==0){
           count++;
       }
        number=number/10;
    }

    cout<<count;
    return 0;
}
