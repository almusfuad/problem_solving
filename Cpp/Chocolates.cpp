#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, totalChocolates = 0;
        cin >> n;
        vector<int> chocolates(n);
        for(int i=0; i<n; i++)
        {
            cin >> chocolates[i];
            totalChocolates += chocolates[i];
        }
        if(totalChocolates%2==0)
        {
            int target = totalChocolates / 2;
            vector<bool> dp(target + 1, false);
            dp[0] = true;

            for(int i=0; i < n; i++)
            {
                for(int j = target; j >= chocolates[i]; j--)
                {
                    dp[j] = dp[j] || dp[j-chocolates[i]];
                }
            }

            dp[target] ? cout << "YES" << endl : cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}