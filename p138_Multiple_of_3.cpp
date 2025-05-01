#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int remainder = n % 3;
    int lower = n - remainder;
    int upper = lower + 3;
if(abs(n-lower) <= abs(n-upper)){
    cout << lower << endl;
}else{
    cout << upper << endl;
}

    return 0;
}