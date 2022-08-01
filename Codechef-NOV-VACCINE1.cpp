#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int l,k=0,ans=0,c;
    if(d1==1 && d1==d2)
    {
       while(ans<p)
       {
           k++;
           ans+=(v1+v2);
       }
       cout<<k<<endl;
    }
    else
    {
        c=min(d1,d2)-1;
        
           while(ans<p)
           {
               if(d1>d2)
               {
                   ans+=v2;
                   d2++;
               }
               else if(d2>d1)
               {
                   ans+=v1;
                   d1++;
               }
               else
               {
                   ans+=(v1+v2);
               }
               c++;
           } 
cout<<c<<endl;
    }
    }
    
