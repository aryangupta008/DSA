#include<bits/stdc++.h>
using namespace std;
int unionandintersection(int arr[],int arr1[],int a,int b)
{
    int arr3[1000][1000];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           if(arr[i]<arr1[j])
           {
               return arr[i];
               i++;
           }
           else if(arr[i]>arr1[j])
           {
                return arr1[j];
                j++;
           }
           else
           {
               return arr[i];
               i++;
               j++;
           }
           
        }

    }
    return 0;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a],arr1[b];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    
    for(int j=0;j<b;j++)
    {
        cin>>arr1[j];
    }
    for(int k=0;k<a+b;k++)
    {
        cout<<unionandintersection(arr,arr1,a,b)<<" ";
    }
    

}