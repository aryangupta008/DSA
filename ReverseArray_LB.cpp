#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);
}
int main()
{
   int n,k,l;
   cin>>n;
   k=n-1;
   l=0;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   reverse(arr,l,k);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<endl;
   }
}