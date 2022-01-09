#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x[n+1]={0};
    cout<<"Enter the array nums: ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        x[a]=1;
    }
    for(int i=0;i<n+1;i++)
    {
        if(x[i]==0)
        {
            cout<<i;
            break;
        }
    }
    
}