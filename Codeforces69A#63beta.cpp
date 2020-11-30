#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[100][100];
    int sum=0,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        sum+=arr[i][0];
        sum1+=arr[i][1];
        sum2+=arr[i][2];
    }
    if(sum==0 && sum1==0 && sum2==0)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
}