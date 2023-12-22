#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
        int u;
        int v;
        int w;
    
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};


int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges;

    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        edges.push_back(ed);
    }

    int dist[n+1];
    for(int i = 1; i <= n; i++)
        dist[i] = INT_MAX;
    
    dist[1] = 0;
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 0; j < edges.size(); j++)
        {
            Edge ed = edges[j];
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if(dist[u] < INT_MAX && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    for(int i = 1; i<= n; i++)
    {
        if(dist[i] == INT_MAX)
            cout << 30000 << " ";
        else
            cout << dist[i] << " ";
    }

    return 0;
}