#include<iostream>
#include<string>

using namespace std;
void toggle(string& str) 
{ 
    int length = str.length(); 
    int k=0,l=0;
    for (int i = 0; i < length; i++) { 
        int c = str[i]; 
        if (islower(c))  
           k++; 
        else if (isupper(c))  
            l++;
           
    } 
    if(k>=l)
    {
        for(int i=0;i<length;i++)
        {
            str[i]=tolower(str[i]);
        }
        
    }
    else
    {
        for(int i=0;i<length;i++)
        {
            str[i]=toupper(str[i]);
        }
       
    }
    
} 
  
// Driver Code 
int main() 
{ 
    string str ; 
    cin>>str;

    toggle(str); 
    cout << str; 
    return 0; 
} 