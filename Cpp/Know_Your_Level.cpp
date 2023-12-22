#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level[N];

//the bfs traversal will return a list of nodes for a certain level
vector<int> bfs(int s, int l)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    //a list of nodes in a certain level
    vector<int> targets;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        
        if(level[u] == l)
        {
            //if level matched, it stores as a list
            targets.push_back(u);
        }
        for(auto v: adj[u])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }

    return targets;
}

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

    int l;
    cin >> l;
    vector<int> shops = bfs(0, l);

    if(shops.empty())
        cout << -1;
    else
    {
        sort(shops.begin(), shops.end());
        for(auto shop: shops)
            cout << shop << " ";
    }
    return 0;
}