#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0) {
        int n;
        cin>>n;
    

        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        bool flag = true;

        for(int i=0; i<n-1; i++) {
            if(arr[i]>arr[i+1]) {
                flag=false;
            }
        }

        

        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        t--;
    }
    return 0;
}