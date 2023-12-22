#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int even = 0, odd = 0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }  
        }

        int res = 0;

        if(n%2==0){
            if(even>odd) {
                res = n/2-odd;
            } else {
                res = n/2-even;
            }
            
        } else {
            res = -1;
        }

        cout<<res<<endl;
        t--;
    }
    return 0;
}