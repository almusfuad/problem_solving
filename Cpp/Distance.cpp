#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int dist[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    dist[s] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v: adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            dist[v] = dist[u] + 1;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int q;
    cin >> q;
    while(q--)
    {
        for(int i=0; i<N; i++)
        {
            visited[i] = false;
            dist[i] = -1;
        }
        
        int s, d;
        cin >> s >> d;
        bfs(s);
        if(dist[d] < 0)
            cout << -1 << endl;
        else
            cout << dist[d] << endl;
    }
    return 0;
}