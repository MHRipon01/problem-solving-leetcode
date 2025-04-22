#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<bool> characters(26, false);  
    for (char c : S) {
        characters[c - 'a'] = true;
    }

    char missing = 'None';
    for (char c = 'a'; c <= 'z'; c++) {
        if (!characters[c - 'a']) {
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}
