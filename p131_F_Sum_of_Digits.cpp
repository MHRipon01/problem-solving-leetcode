#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    
    while(t--){
        string s; cin >> s;
        int sum=0;
        for(char c:s){
            sum += c - '0';
        }
        cout << sum << endl;
    }

    return 0;
}