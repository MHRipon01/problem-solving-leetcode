#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
     float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
       
        sum += x;
// cout << "sum " << sum <<endl;
        double avg = sum / i;
        if(avg %2.0 !=0)
        cout<<fixed<< setprecision(10) << avg << endl;
        else cout << avg<<endl;
    }

    return 0;
}