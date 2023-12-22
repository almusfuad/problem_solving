#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    string w="Ratul";

    stringstream ss(s);

    int flag=0;
    string word;
    while(ss>>word) {
        if(word==w) {
            flag = 1;
        }
    }

    if(flag==1) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    
    return 0;
}