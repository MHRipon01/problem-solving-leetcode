#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // s a jodi 'A' thake alice er set a insert korbo , b thakle bob er set a
    //alice er set a jodi 1 thake && bob er set a n thake alice jitbe;
    //onno shob khetre alice er max card jodi bob er max card theke boro hoy alice jitbe 


    //max card er jonno set(sorted thakbe) rbegin diye last er value nibo (max)




    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<int> alice, bob;

        for (int i = 0; i <= n; i++)
        {
            if (s[i] == 'A')
                alice.insert(i+1);
            else if (s[i] == 'B')
                bob.insert(i+1);
        }

        if (alice.find(1) != alice.end() && bob.find(n) != bob.end())
           { cout << "alice" << endl;}
            else{
                int maxCardOfAlice = *alice.rbegin();
                int maxCardOfBob = *bob.rbegin();

                if(maxCardOfAlice > maxCardOfBob) {cout << "alice"}
                else{ cout << "bob"<<endl;}


            }
    }

    return 0;
}