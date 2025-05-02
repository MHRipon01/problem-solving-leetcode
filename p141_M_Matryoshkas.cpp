#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int tt; cin >> tt;
 
  while(tt--) {
    int n; cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
      int x;cin >> x;
      mp[x]++;
    }
    int set=0;
    while (!mp.empty()) {
        int key = mp.begin()->first;
        while (mp.count(key)) {
            mp[key]--;
            if (mp[key] == 0) {
                mp.erase(key);
            }
            key++;
        }
        set++;
    }
    cout <<set<<"\n";
  }
 return 0;
}