#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, h;
        cin >> x >> y >> h; 
        x = x - h;
        
        if(x%y != 0){
            cout << (x / y)+2 << endl; 
        }else
        cout << (x / y)+1 << endl;
    }

    return 0;
}