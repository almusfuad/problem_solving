#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; ++i) {
        cin>>v[i];
    }

    for(int a: v) {
        if(a<0) {
            a=2;
        } else if(a>0){
            a=1;
        }

        cout<<a<<" ";
    }
    return 0;
}