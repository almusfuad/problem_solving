#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    string after_rev;
    while(ss>>w) {
        reverse(w.begin(), w.end());
        after_rev.append(w);
        after_rev.push_back(' ');
    }
    after_rev.pop_back();
    cout<<after_rev<<endl;
    return 0;
}