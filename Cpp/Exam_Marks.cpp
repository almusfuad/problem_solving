#include<bits/stdc++.h>
using namespace std;
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
        
        vector<bool> dp(obtainTo+1, false);
        dp[0] = true;

        for(auto mark: marks)
        {
            for(int i = obtainTo; i>=mark; i--)
                dp[i] = dp[i] || dp[i-mark];
        }

        dp[obtainTo] ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}