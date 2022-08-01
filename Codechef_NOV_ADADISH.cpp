#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    int arr[n];
    int x,y,z=0,xx=0;
    while(t--)
    {
        int arr[n];
       
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<n;i++)
        {
           x=arr[0];
           y=arr[1];
          while(i<n)
          {
              if(x>y)
              {
                  z+=arr[i];
                  i++;
              }
              else{
                  xx+=arr[i];
                  i++;
              }
              
              
          }
          if(z>xx)
              {
                cout<<z<<endl;
              }
              else
              {
                  cout<<xx<<endl;
              }
              }
          

          

        }

    }
    
