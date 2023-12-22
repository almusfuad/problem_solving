#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v_frq(26, 0);

    for(int i=0; i<26; ++i) {
        vector<string> v(1);
        cin>>v[0];
        for(char c: v[0]) {
            v_frq[c-'a']++;
        }
    }

    for(int i=0; i<26; ++i) {
        if(v_frq[i] !=0) {
            char c= i+ 'a';
            cout<<c<<" : "<<v_frq[i]<<endl;
        }
    }
    return 0;
}