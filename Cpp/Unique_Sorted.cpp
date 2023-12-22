#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>> n;

        // declare of vector with size
        vector<int> v(n);

        // take input of values
        for(int i=0; i<n; ++i)
        {
            cin>>v[i];
        }

        // sorting in decending order
        sort(v.begin(), v.end(), greater<int>());

        // erase duplicate values
        v.erase(unique(v.begin(), v.end()), v.end());

        // output the new unique vector
        for(long long int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}