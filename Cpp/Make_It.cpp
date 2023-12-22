#include<bits/stdc++.h>
using namespace std;

bool canReach(int n)
{
    if(n <= 0) return false;
    if(n==1) return true;
    if(n%2 == 0) return canReach(n/2);

    return canReach(n-3);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        // vector<bool> dp(n+1, false);
        // dp[1] = true;

        // for(int i = 1; i <=n; i++)
        // {
        //     if(dp[i])
        //     {
        //         if(i*2 <= n) dp[i*2] = true;
        //         if(i+3 <= n) dp[i+3] = true;
        //     }
        // }

        canReach(n) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}