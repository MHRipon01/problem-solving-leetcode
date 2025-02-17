//https://codeforces.com/problemset/problem/96/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int streak =1;
    char currentChar = s[0];

    for(int i = 1 ; i<s.length(); i++){
        if(s[i] == currentChar){
            streak++;
            if(streak >=7){
                cout << "YES" << endl;
                return 0;
            }
        }else{
            streak = 1;
            currentChar = s[i];
        }
    }
    cout <<"NO"<< endl;

    return 0;
}