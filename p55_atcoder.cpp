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

// other approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     int case1 = a + (a - 1); 
//     int case2 = b + (b - 1);  
//     int case3 = a + b;        

//     cout << max({case1, case2, case3}) << endl;

//     return 0;
// }
