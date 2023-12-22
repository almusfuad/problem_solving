#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t !=0 ) {
        string s;
        cin>>s;
        int first_three=0;
        int last_three=0;

        for(int i=0, j=5; i<j; ++i, --j) {
            first_three += s[i];
            last_three += s[j];
        }
        

        if(first_three==last_three) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

        t--;
    }
    return 0;
}