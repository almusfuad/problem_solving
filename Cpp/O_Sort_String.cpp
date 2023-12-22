#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>> n;

    char s;
    int cnt[26] = {0};

    for(int i=0; i<n; ++i) {
        cin>> s;
        cnt[s - 'a']++;
    }

    for(int i=0; i<26; ++i) {
        while(cnt[i] != 0) {
            char c = i+97;
            cout<< c;
            cnt[i]--;
        }
    }

    return 0;
}