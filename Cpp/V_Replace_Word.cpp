#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // getline(cin, s);
    cin>>s;
    string w="EGYPT";
    while((s.find(w)) != string::npos) {
        s.replace(s.find(w), 5, " ", 1);
    }
    cout<<s<<endl;
    return 0;
}