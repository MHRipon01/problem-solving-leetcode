// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, doubleA, doubleB, sumOfAB;

    cin >> a >> b;
    doubleA = a + (a - 1);
    doubleB = b + (b - 1);
    sumOfAB = a + b;

    if (doubleA > doubleB && doubleA > sumOfAB)
    {
        cout << doubleA << endl;
    }
    else if (doubleA < doubleB && doubleB > sumOfAB)
        cout << doubleB << endl;
    else
        cout << sumOfAB << endl;
    return 0;
}