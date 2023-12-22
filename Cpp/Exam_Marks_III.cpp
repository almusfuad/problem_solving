#include<bits/stdc++.h>
using namespace std;

const int INF = 1e5+7;

int waysObtainMark(vector<int>& marks, int obtainTo)
{
    vector<int> dp(obtainTo+1, INF);
    dp[0] = 0;
    for(auto mark: marks){
        for(int i = mark; i<=obtainTo; i++){
            if(dp[i-mark] >= 0)
            dp[i] = min(dp[i],dp[i-mark]+1);
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

        if(waysObtainMark(marks, obtainTo) == INF)
            cout << -1 << endl;
        else
            cout << waysObtainMark(marks, obtainTo) << endl;
    }
    return 0;
}