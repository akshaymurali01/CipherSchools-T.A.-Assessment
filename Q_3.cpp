#include<iostream>
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
    int dp[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    dp[0] = 0;
    dp[1] = x[n-1];
    dp[2] = max(x[n-1],x[n-2]);
    for(int i=3;i<n+1;i++)
    {
        dp[i] = max(dp[i-1],x[n-i]+dp[i-2]);
    }
    cout<<dp[n];
}

/* optimal solution of last n elements = max( first element in last n elements + optimal solution of
 last n-2 elements, optimal solution of last n-1 elements) */