#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[105];
ll fib(ll n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    if(n==2)
    {
        return 1;
    }
    if(n==3)
    {
        return 2;
    }
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fib(n-1) + fib(n-2) + fib(n-3) + fib(n-4);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    
    ll n;
    cin>>n;
    cout<<fib(n);
    return 0;
}