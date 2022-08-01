#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int res=0;
    for(int i=n;i<50;i++)
    {
        if(m%i==0)
        {
            res++;
            break;
        }

    }
    if(res==1)
    cout<<"YES";
}