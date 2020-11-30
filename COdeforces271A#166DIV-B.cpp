#include<iostream>
using namespace std;
int main()
{
 int y;
 cin>>y;
 int a,b,c,d;
 while(true)
 {
     y++;
a=y/1000;
b=(y/100)%10;
c=(y/10)%10;
d=(y%10);
if(a!=d && a!=b && a!=c && b!=c && b!=d && c!=d)
break;

 }
   cout<<y;
   
}