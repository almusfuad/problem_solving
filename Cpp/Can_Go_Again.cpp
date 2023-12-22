#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e18+10;
class Edge
{
    public:
        int a, b;
        long long w;

        Edge(int a, int b, long long w)
        {
            this->a = a;
            this->b = b;
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
        int a, b;
        long long w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a, b, w));
    }

    int s;
    cin >> s;

    vector<long long> dist(n+1, INF);

    // find minimum cost from a fixed source
    dist[s] = 0;
    for(int i = 1; i<= n-1; i++)
    {
        for(auto edge: edges)
        {
            int a = edge.a;
            int b = edge.b;
            long long w = edge.w;

            if(dist[a] != INF && dist[b] > dist[a] + w)
                dist[b] = dist[a] + w;
        }
    }

    // code for cycle detection
    bool isNegativeCycle = false;
    for(int i = 1; i<= n-1; i++)
    {
        for(auto edge: edges)
        {
            int a = edge.a;
            int b = edge.b;
            long long w = edge.w;
            if(dist[a] != INF && dist[b] > dist[a] + w)
            {
                isNegativeCycle = true;
                break;
            }
        }
        if(isNegativeCycle) break;
    }


    int t;
    cin >> t;
    while(t--)
    {
        int d;
        cin >> d;
        if(isNegativeCycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            dist[d] != INF ? cout << dist[d] << endl : cout << "Not Possible" << endl;
        }
    }
    return 0;
}