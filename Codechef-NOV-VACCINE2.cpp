#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,k;
        int r1,r2;
        cin>>n>>d;
        int p[n],res=0,l,h;
       for(int i=0;i<n;i++)
       {
           cin>>p[i];
           if(p[i]>=80 || p[i]<=9)
           {
              res++;
              h=round(res/d);

           }
          k=n-res;
           l=round(k/d);
           
       }
       cout<<l+h<<endl;
    }
}