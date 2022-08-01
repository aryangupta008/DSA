#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n,m;
    cin>>n>>m;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]==m[i])
        cout<<"0";
        else
        {
            cout<<"1";
        }
        
    }
    
}