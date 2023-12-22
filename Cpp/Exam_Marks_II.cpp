#include<bits/stdc++.h>
using namespace std;

bool canObtainMark(vector<int>& marks, int obtainTo)
{
    vector<bool> dp(obtainTo+1, false);
    dp[0] = true;
    for(auto mark: marks){
        for(int i = mark; i<=obtainTo; i++){
            dp[i] = dp[i] || dp[i-mark];
        }
    }
    return dp[obtainTo];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int obtainTo = 1000-m;
        vector<int> marks(n);
        for(int i=0; i<n; i++)
            cin >> marks[i];

        if(canObtainMark(marks, obtainTo))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}