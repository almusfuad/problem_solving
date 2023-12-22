#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0; i<3; ++i) {
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i=0; i<3; ++i) {
        mx = max(arr[i], mx);
        mn = min(arr[i], mn);
    }

    cout<<mn <<' '<<mx;
    return 0;
}