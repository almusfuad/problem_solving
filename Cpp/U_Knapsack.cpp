#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int s, int w[], int v[])
{
    if(n==0 || s==0) return 0;
    if(w[n-1] <= s)
    {
        int op1 = knapsack(n-1, s-w[n-1], w, v) + v[n-1];
        int op2 = knapsack(n-1, s, w, v);
        return max(op1, op2);
    }
    else
    {
        return knapsack(n-1, s, w, v);
    }
}

int main()
{
    int n, s;
    cin >> n >> s;

    int w[n], v[n];
    for(int i=0; i < n; i++)
        cin >> w[i] >> v[i];
    
    int dp[n+1][s+1];
    for(int i = 0; i<=n; i++)
    {
        for(int j=0; j<=s; j++)
        {
            if(i==0 || j==0)
                dp[i][j] = 0;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s; j++)
        {
            if(w[i-1] <= j)
                dp[i][j] = max(dp[i-1][j-w[i-1]]+v[i-1], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    cout << dp[n][s] << endl;
    return 0;
}