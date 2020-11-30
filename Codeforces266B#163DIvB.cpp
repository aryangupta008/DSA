#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin>>t;//t time
    int n;
    cin>>n;// size of string
    string s;
    cin>>s;
    while(n--)
    {
        for(int i=0;i<t-1;i++)
        {
           
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<" ";

}
