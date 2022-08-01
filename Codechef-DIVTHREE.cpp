#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,a[n],res=0,sum=0;
        cin>>n>>k>>d;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            res+=a[i];
    }
    sum=res/k;
    if(d<=sum)
    {
        cout<<d<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    
    }
}