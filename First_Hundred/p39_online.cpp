// You will be given a list A of type pairs.Each pair will contain one string S and one unique integer I.The string will contain only English lowercase alphabets and no spaces.

//     You need to sort the pairs according to the string values in ascending order.If there are multiple pairs with the same string,
//     you need to sort them according to the integer value in descending order.



// // input 
// 5
// asif 1
// monir 2
// maria 3
// sultan 4
// mushfiq 5

// //output

// mushfiq 5
// sultan 4
// monir 2
// asif 1
// maria 3

#include <bits/stdc++.h>
using namespace std;

class Comparator
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first > b.first)
        {
            return true;
        }
        else if (a.first == b.first)
        {
            if (a.second < b.second)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    // priority_queue<data_type> name;

    priority_queue<pair<string, int>, vector<pair<string, int>>, Comparator> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        pq.push({s, x});
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}