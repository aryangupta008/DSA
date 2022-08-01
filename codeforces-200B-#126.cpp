#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int res=0;
    float k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        res+=arr[i];
    }
    k=res/n;
    cout<<k;
}