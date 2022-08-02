#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,k;
        cin>>n>>r;
        int candyy[n];
        for(int i=0;i<n;i++)
        {
            cin>>candyy[i];
        }
        int sum=0,i=0;
        n=sizeof(candyy)/sizeof(candyy[0]);
        for( i=0;i<n;i++)
        {
            sum=sum+candyy[i];
           
        }
         k=sum%r;
        cout<<"Case #"<<i<<k<<"\n";
    }
}