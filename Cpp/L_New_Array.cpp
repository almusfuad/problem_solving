#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;


    int v1[n];
    int v2[n];

    for(int i=0; i<n; ++i) {
        cin>>v1[i];
    }

    for(int i=0; i<n; ++i) {
        cin>>v2[i];
    }

    vector<int> v(v2, v2+n);

    v.insert(v.begin()+n, v1, v1+n);

    for(int a: v) {
        cout<<a<<" ";
    }
    return 0;
}