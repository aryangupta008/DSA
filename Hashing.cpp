#include<bits/stdc++.h>
using namespace std;
#include<map>
int countDistinct(int arr[],int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<countDistinct(arr,n);
}