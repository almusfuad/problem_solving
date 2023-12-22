#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin>> a >> s >> b;

    if(a > b && s == '>') {
        cout<< "Right" << endl;
    } else if (a < b && s == '<') {
        cout<< "Right" <<endl;
    } else if (a==b && s=='=') {
        cout<< "Right" <<endl;
    } else {
        cout<< "Wrong" <<endl;
    }
    return 0;
}