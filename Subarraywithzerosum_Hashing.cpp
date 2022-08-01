#include<bits/stdc++.h>
#include<set>
using namespace std;
bool issubarray(int arr[],int n)
{
    unordered_set<int> h;
    int prefix_sum=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];;
        if(h.find(prefix_sum)!=h.end())
        return true;
        if(prefix_sum==0)
        return true;
        h.insert(prefix_sum);
    }
    return false;
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
        cout<<issubarray(arr,n)<<endl;
    }
}