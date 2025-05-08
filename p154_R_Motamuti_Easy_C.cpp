#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        // If it's an opening bracket, push onto stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        // If it's a closing bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false; // No matching opening bracket

            char top = st.top();
            st.pop();

            // Check if the brackets match
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // If stack is empty, all brackets matched
    return st.empty();
}

int main() {
    string input;
    cin >> input;

    if (isValid(input)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}