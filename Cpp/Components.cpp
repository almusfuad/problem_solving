#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+5;
vector<int> adj[N];
bool visited[N];

void dfs(int s, vector<int>& component)
{
    visited[s] = true;
    //store every nodes as a list
    component.push_back(s);

    for(auto v: adj[s])
    {
        if(visited[v]) continue;
        dfs(v, component);
    }
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


    vector<int> components;
    //loop through the input limits to not miss any nodes
    for(int i = 0; i <= 1000; i++)
    {
        if(visited[i]) continue;
        //for every unvisited node, the declared vector size will be zero
        vector<int> component;
        dfs(i, component);
        if(component.size() > 1)
            //stores the components size to another vector
            components.push_back(component.size());
    }

    sort(components.begin(), components.end());
    for(auto component: components)
    {
        cout << component << " ";
    }
    return 0;
}