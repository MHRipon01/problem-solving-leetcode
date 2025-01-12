// https://leetcode.com/problems/backspace-string-compare/

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st1;
        stack<char> st2;
        for (char c : s)
        {
            if (c != '#')
            {
                st1.push(c);
            }
            else if (!st1.empty())
            {

                st1.pop();
            }
        }

        for (char c : t)
        {
            if (c != '#')
            {
                st2.push(c);
            }
            else if (!st2.empty())
            {
                st2.pop();
            }
        }
        return st1 == st2;
    }
};

// another way

//     stack<char> st;
//     stack<char> st2;
//     for (char c : s) {
//         if(c == '#') {
//             if (!st.empty())
//                 st.pop();
//         }
//         else {
//             st.push(c);
//         }
//     }

//     for (char c : t) {
//         if(c == '#') {
//             if (!st2.empty())
//                 st2.pop();
//         }
//         else {
//             st2.push(c);
//         }
//     }
//     if (st == st2)
//         return true;
//     else
//         return false;
// }