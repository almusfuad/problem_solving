#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adj[N];


int main()
{
    int n, e;
    cin >> n >> e;

    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int k;
    cin >> k;

    cout << adj[k].size();
    return 0;
}