#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adj[N];
int parent[N];
int depth[N];
int subtreeSize[N];

void dfs(int node, int par, int d)
{
    parent[node] = par;
    depth[node] = d;
    subtreeSize = 1;

    for(auto child: adj[node])
    {
        if(child != par)
        {
            dfs(child, node, d + 1);
            subtreeSize[node] += subtreeSize[child];
        }
    }
}

int findCentroid(int node, int par, int totalnodes)
{
    for(int child: adj[node])
    {
        if(child != par && subtreeSize[child] > totalnodes / 2)
        {
            return findCentroid(child, node, totalnodes);
        }
    }
    return node;
}

void rebuild(int u, int v, int x, int y)
{

}

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);
    return 0;
}