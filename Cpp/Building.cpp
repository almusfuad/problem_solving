#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

class Edge
{
    public:
        int a, b, w;
        Edge(int a, int b, int w)
        {
            this->a = a;
            this->b = b;
            this->w = w;
        }

        bool operator<(const Edge& other) const {
            return w < other.w;
        }
};

int parent[N];
int parentLevel[N];
void dsu_set(int n)
{
    for(int i = 1; i <= n; i++)
    {
        parent[i] = i;
        parentLevel[i] = 0;
    }
}

int dsu_find(int node)
{
    if(node == parent[node])
        return node;
    else
        return (parent[node] = dsu_find(parent[node]));
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    
    if(leaderA != leaderB)
    {
        if(parentLevel[leaderA] > parentLevel[leaderB])
            parent[leaderB] = leaderA;
        else if(parentLevel[leaderB] > parentLevel[leaderA])
            parent[leaderA] = leaderB;
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);
    vector<Edge> edges;
    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a, b, w));
    }

    sort(edges.begin(), edges.end());

    long long totalCost = 0;
    int connectedComponents = 0;

    for(auto edge: edges)
    {
        int a = edge.a;
        int b = edge.b;
        int w = edge.w;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA != leaderB)
        {
            totalCost += w;
            dsu_union(a, b);
            connectedComponents++;
        }
    }
    
    connectedComponents == n-1 ? cout << totalCost << endl : cout << "-1" << endl;

    return 0;
}