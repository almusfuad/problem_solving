#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
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
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int parent[N];
int parentLevel[N];
void dsu_size(int n)
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
    dsu_size(n);
    vector<Edge> v;

    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }
    
    sort(v.begin(), v.end(), cmp);

    int mstWeight = 0;
    for(auto val: v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA != leaderB)
        {
            mstWeight += w;
            dsu_union(a, b);
        }
    }

    cout << mstWeight << endl;
    return 0;
}