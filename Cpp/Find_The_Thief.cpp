#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int xorSum = 0;
        for(int i = 0; i<n; i++)
        {
            int code;
            cin >> code;
            xorSum ^= code;
        }

        cout << xorSum << endl;


    }
    return 0;
}