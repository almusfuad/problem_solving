#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int possibleWaysObtainMark(vector<int>& marks, int obtainTo)
{
    vector<int> dp(obtainTo+1, 0);
    dp[0] = 1;
    for(auto mark: marks){
        for(int i = mark; i<=obtainTo; i++){
            dp[i] = (dp[i]+dp[i-mark]) % mod;
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

        cout << possibleWaysObtainMark(marks, obtainTo) << endl;
    }
    return 0;
}