#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;

    long long int arr[n];
    for(int i=0; i<n; ++i) {
        cin>> arr[i];
    }


    int flag = 1;
    for(int i=0, j=n-1; j>=i; ++i, --j) {
        if(arr[i]==arr[j]) {
            flag = 1;
        } else {
            flag = 0;
        }
    }

    if(flag == 1) {
        cout<< "YES"<< endl;
    } else {
        cout<< "NO" << endl;
    }
    return 0;
}