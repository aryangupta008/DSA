#include<bits/stdc++.h>
using namespace std;
int kthsmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}
int kthgreatest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k+2];
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
     
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        cout<<kthsmallest(arr,n,k)<<" ";
        cout<<kthgreatest(arr,n,k);
    }
}