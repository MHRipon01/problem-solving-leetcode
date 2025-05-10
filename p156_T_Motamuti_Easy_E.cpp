#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    const double PI = 3.1416;

    for (int i = 1; i <= t; i++) {
        double r;
        cin >> r;

        double area = r * r * (8 - 2 * PI);
        cout << fixed << setprecision(2);
        cout << "Case " << i << ": " << area << endl;
    }

    return 0;
}
