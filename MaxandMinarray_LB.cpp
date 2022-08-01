#include<bits/stdc++.h>
using namespace std;
int arra(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                {
                    flag=false;
                    break;
                }
            }

        }
        if(flag==true)
        {
            return arr[i];
        }
    }
    return -1;
}
int arrmin(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            flag=false;
            break;
        }

    }
    if(flag==true)
    return arr[i];
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<arra(arr,n)<<" ";
    cout<<arrmin(arr,n);
    }
}