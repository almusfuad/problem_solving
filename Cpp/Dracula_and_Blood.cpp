#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int zaza = 0, kaza = 0;
        int change = 1;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '0')
                change++;
            else
            {
                if(change%2 == 0)
                    kaza++;
                else
                    zaza++;
            }
        }

        cout << zaza << endl;
    }
    return 0;
}