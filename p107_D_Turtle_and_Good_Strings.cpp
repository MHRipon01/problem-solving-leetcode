//https://codeforces.com/problemset/problem/2003/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool isGood = false;

        for (int i = 1; i < n; i++) {
            string t1 = s.substr(0, i); 
            string t2 = s.substr(i, n - i); 

            if (t1[0] != t2[t2.size() - 1]) {
                isGood = true;
                break;
            }
        }

        if(isGood){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;
}