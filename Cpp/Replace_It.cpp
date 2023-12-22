#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t!=0) {
        string s;
        string x;

        cin>>s>>x;

        while(s.find(x) != string::npos) {
            s.replace(s.find(x), x.length(), "$");
        }

        cout<<s<<endl;
        t--;
    }

    return 0;
}