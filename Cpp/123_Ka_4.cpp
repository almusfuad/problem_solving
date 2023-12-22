#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            for(int j=1; j<=n; j++)
                cout << j;
            cout << endl;
        }
        else if(i==n)
        {
            for(int j=1; j<=n; j++)
                cout << i;
            cout << endl;
        }
        else
        {
            cout << i;
            for(int j=2; j<n; j++)
            {
                cout << " ";
            }
            cout << n << endl;
        }
    }
    return 0;
}