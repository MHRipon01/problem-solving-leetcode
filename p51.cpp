#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    for(ll i=4;i<=n;i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
    }
    cout<<arr[n];
    return 0;
}