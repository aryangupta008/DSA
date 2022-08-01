#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            
            if((m+k)%7==0)
            {
                count++;
            }
           
        }
        cout<<count<<endl;
    }
}