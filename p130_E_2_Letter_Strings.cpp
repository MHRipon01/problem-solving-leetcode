//https://codeforces.com/problemset/problem/1669/E

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<string, int> freq; 
        unordered_map<char, int> freq_first; 
        unordered_map<char, int> freq_second; 

        vector<string> strings(n);
        for (int i = 0; i < n; i++) {
            cin >> strings[i];
            freq[strings[i]]++;
            freq_first[strings[i][0]]++;
            freq_second[strings[i][1]]++;
        }

        long long result = 0;
        for (const string& s : strings) {
            char first_char = s[0];
            char second_char = s[1];

            result += freq_first[first_char] - freq[s];
            result += freq_second[second_char] - freq[s];
        }

        cout << (result / 2) << endl;
    }
    return 0;
}