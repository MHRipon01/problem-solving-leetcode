//https://codeforces.com/problemset/problem/621/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    long long int sum = 0;
    int min_odd = INT_MAX;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];

        if(arr[i] % 2 == 1)
        {
            min_odd = min(min_odd, arr[i]);
        }
    }

    if(sum % 2 == 1)
    {
        sum -= min_odd;
    }

    cout<<sum<<endl;
    return 0;
}
