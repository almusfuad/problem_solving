#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char h, s;
    cin >> a >> h >> b >> s >> c;

    if(a+b==c || a-b==c || a*b==c) {
        cout<< "Yes" <<endl;
    } else {
        if(h=='*') {
            cout<< a*b << endl;
        } else if (h=='+') {
            cout<< a+b << endl;
        } else if (h=='-') {
            cout<< a-b << endl;
        }
        
    }
    return 0;
}