#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string str;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            str+='0';
            
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
           str+='1';
           i++;
        }
        if(s[i]=='-' && s[i+1]=='-')
        {
            str+='2';
            i++;
        }

    }
    cout<<str;
}