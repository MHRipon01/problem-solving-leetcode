// // https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b, t, cnt = 0;
//     cin >> a >> b >> t;
//     int time = a;
//     while (time <= t)
//     {
//         cnt++;
//         time += a;
//     }
//     cout << cnt * b << endl;

//     return 0;
// }

// ANOTHER APPROACH

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, T, count = 0;
    cin >> A >> B >> T;

    for (int time = A; time <= T; time += A) {
        count++;  
    }

    cout << count * B << endl;  
    return 0;
}