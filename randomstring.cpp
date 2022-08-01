#include<iostream>
#include<string>
using namespace std;
const int max=26;
string print(int n)
{
    char alpha[3]={'a','b','c'};
    string res;
    for (int i = 0; i < n; i++)  
        res = res + alpha[rand() % 3]; 
return res;
}
int main()
{
int n;
cin>>n;
cout<<print(n);
}