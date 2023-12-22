#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int a, b, c;
    cin>>a>>b>>c;
    
    if((a == b) && (b == c) && a > 0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}