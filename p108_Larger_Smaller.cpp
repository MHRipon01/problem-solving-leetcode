#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        
        sort(A.begin(), A.end());

      
       int count =0;
       for(int i = A[0] +1; i <= A[n-1]-1 ; i++){
        count++; 
       }
       cout << count <<'\n';
       

    }

    return 0;
}