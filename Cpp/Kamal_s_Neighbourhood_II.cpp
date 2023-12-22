#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];

void dfs(int s)
{
    visited[s] = true;

    for(auto v: adj[s])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for(int i =0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int k;
    cin >> k;


    dfs(k);

    //for own node, store the value as -1
    int reachableHouse = -1;
    for(int i = 0; i < n; i++)
    {
        //for directed graph, only it is possible to go that place which is visited by dfs traversal
        if(visited[i])
            reachableHouse++;
    }

    cout << reachableHouse;
    return 0;
}