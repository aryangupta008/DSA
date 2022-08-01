#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    int a[n],b[n];
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>k)
            b[i]=0;
            else
            {
                b[i]=1;
                k=k-a[i];
            }
            cout<<b[i];
        }

    }
}
    