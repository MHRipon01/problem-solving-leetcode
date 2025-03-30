#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input1, input2;
    cin >> input1;
    cin >> input2;
    int count = 0;


    for (int i = 0; i < input1.length(); i++)
    {
        if (input1[i] != input2[i])
            count++;
    }

    cout << count << endl;

    return 0;
}