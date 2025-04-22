// codeforces 800
// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string word;
    while (n--)
    {
        cin >> word;
        char firstLetter = word[0];
        char lastLetter = word[word.length() - 1];

        if (word.length() > 10)
        {
            cout << firstLetter << word.length() - 2 << lastLetter;
            cout << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}