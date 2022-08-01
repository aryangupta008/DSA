#include<bits/stdc++.h>
#include<set>
using namespace std;
bool givensum(int arr[],int n,int k)
{
    unordered_set<int> h;
    int sum=0;
    for(int i=0;i<n;i++)
    {
         if(sum==k)
        return true;
        if(h.find(sum)!=h.end())
        return true;
       
        h.insert(sum);
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>sum;
        cout<<givensum(arr,n,sum)<<endl;
    }
}