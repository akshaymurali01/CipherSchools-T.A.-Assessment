#include<iostream>
#include<cmath>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i = 0;i<n;i++)
    {
        cin>>x[i];
    }
    int target;
    cin>>target;
    int sum;
    int closesum = 9999999;
    for(int i=0;i<n;i++)
    {
        sum = x[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=x[j];
            for(int k =j+1;k<n;k++)
            {
                sum+=x[k];
                if(abs(target - sum)<abs(target - closesum) )
                    closesum = sum;
                sum -=x[k];
            }
        }
    }
    cout<<closesum;
}
/* just go through all the possible combinations, nothing fancy */