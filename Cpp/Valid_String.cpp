#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int a = 0;
        int b = 0;

        for(char c: s)
        {
            if(c == 'A')
            {
                a++;
            }
            else if(c == 'B')
            {
                b++;
            }
        }

        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}