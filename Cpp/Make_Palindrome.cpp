#include<bits/stdc++.h>
using namespace std;

// int timeToPalindrome(string a)
// {
//     int n = a.size();
//     vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

//     for(int gap = 1; gap<n; gap++){
//         for(int i=0, j=gap; j<n; i++, j++){
//             if(a[i]==a[j])
//                 dp[i][j] = dp[i+1][j-1];
//             else
//                 dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1;
//         }
//     }

//     return dp[0][n-1];
// }

int minDel_or_minInser(string a)
{
    int n=a.size();
    string b = a;
    reverse(b.begin(), b.end());
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }

    int i=n, j=n;
    string ans;
    while(i!=0 && j!=0)
    {
        if(a[i-1]==b[j-1]){
            ans+= a[i-1];
            i--;
            j--;
        }
        else{
            if(dp[i][j-1] > dp[i-1][j])
                j--;
            else
                i--;
        }
    }

    return a.size() - ans.size();
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        cout << minDel_or_minInser(a) << endl;
    }
    return 0;
}