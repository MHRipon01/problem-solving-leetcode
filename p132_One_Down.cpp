#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        string S, T;
        cin >> S >> T;

        int SOfOne = 0, TOfOne = 0;

        for (int i = 0; i < N; ++i) {
            if (S[i] == '1') SOfOne++;
            if (T[i] == '1') TOfOne++;
        }

        if (SOfOne >= TOfOne && (SOfOne - TOfOne) % 2 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
