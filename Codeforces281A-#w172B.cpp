#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int length=s.length();
    for(int i=0;i<length;i++)
    {
        int c=s[0];
        if(islower(s[0]))
        {
            s[0]=toupper(s[0]);
        }
    }
    cout<<s<<endl;

}