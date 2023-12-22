#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int fSpace = 0;
    int mSpace = n-2;

    for(int i=1; i<=n; i++) {

        for(int j=1; j<=fSpace; j++) {
            cout<<" ";
        }

        if(i<(n/2+1)) {
            cout<<"\\";
        }else if(i==(n/2+1)) {
            cout<<"X"<<endl;
        }else {
            cout<<"/";
        }


        for(int j=1; j<=mSpace; j++) {
            cout<<" ";
        }

        if(i<(n/2+1)) {
            cout<<"/"<<endl;
        } else if(i>(n/2+1)) {
            cout<<"\\"<<endl;
        }

        if(i <= n/2) {
            fSpace ++;
            mSpace -= 2;
        } else {
            fSpace --;
            mSpace += 2;
        }
     }

    return 0;
}