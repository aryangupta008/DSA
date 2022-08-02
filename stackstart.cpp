#include<bits/stdc++.h>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        top++;
        arr[top]=x; 
    }
    int pop()
    {
        int res=arr[top];
        
    
         }
}
int main()
{

}