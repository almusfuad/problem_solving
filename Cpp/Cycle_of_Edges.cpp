#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+3;
int parent[N];
int parentLevel[N];

class Edge
{
    public:
        int a, b;

    Edge(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

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

int cycleCount(int n, vector<Edge> edges)
{
    int cycleEdges = 0;

    for(auto edge: edges)
    {
        int a = edge.a;
        int b = edge.b;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB)
        {
            cycleEdges++;
        }
        else
        {
            dsu_union(a, b);
        }
    }
    return cycleEdges;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        edges.push_back(Edge(a, b));
    }

    dsu_set(n);
    int result = cycleCount(n, edges);
    cout << result << endl;
    return 0;
}