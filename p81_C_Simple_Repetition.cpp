// https://codeforces.com/contest/2093/problem/C

#include <bits/stdc++.h>
using namespace std;

int str_to_int(string x, int k)
{
    string num_in_string;
    int main_num;
    for (int i = 0; i < k; i++)
    {
        num_in_string += x;
    }

    stringstream(num_in_string) >> main_num;

    // cout << main_num +3 << endl;

    return main_num;
}

bool primeOrNot(int num,  int i = 2)
{
  
    if (i * i > num)
        return true;
    if (num % i == 0)
        return false;

    primeOrNot(num , i+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string x;
        int k;
        cin >> x >> k;
        int main_num = str_to_int(x, k);

        primeOrNot(main_num)
            ? cout << "YES" << '\n'
            : cout << "NO" << '\n';
    }

    return 0;
}