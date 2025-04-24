//https://codeforces.com/problemset/problem/2093/C

#include <bits/stdc++.h>
using namespace std;


bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solution()
{
    int x, k;
    cin >> x >> k;
    if (k > 1 && x > 1)
    {
        cout << "NO";
    }
    else if (k == 1)
    {
        if (isPrime(x))
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if ((k == 2))
            cout << "YES";
        else
            cout << "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
        cout << endl;
    }
}