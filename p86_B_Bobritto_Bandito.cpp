#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int len = m + 1;

        // Try to center the segment around 0 as much as possible
        int mid = 0;
        int l_prime = mid - (len - 1) / 2;
        int r_prime = l_prime + len - 1;

        // Ensure the chosen segment fits inside [l, r]
        if (l_prime < l) {
            l_prime = l;
            r_prime = l_prime + len - 1;
        } else if (r_prime > r) {
            r_prime = r;
            l_prime = r_prime - len + 1;
        }

        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}
