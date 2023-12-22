#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt[26] = {0};

        int res = 0;

        int k = 0;
        while(s[k] != '\0') {
            if(s[k] >= 'A' && s[k] <= 'Z') {
                int j = s[k] - 'A';
                cnt[j]++;
            }   
            k++;
        }

        for(int i=0; i<n; ++i) {
            if(cnt[i] >= 1) {
                res += cnt[i] + 1;
            }
        }
        
        cout<<cnt<<endl;

        t--;
    }
    return 0;
}