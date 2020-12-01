#include<iostream>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    string c;
    cin>>c;
    int res=0;
    char z=c.at(0);
    for(int i=1;i<n;i++)
    {
     if(z==c.at(i))
     res++;
     z=c.at(i);   
    }
    cout<<res;
}