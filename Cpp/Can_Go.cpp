#include<bits/stdc++.h>
using namespace std;
typedef pair<long long int, long long int> pii;
const int N = 1e7+7;
const int INF = 1e9+10;
vector<pii> g[N];
vector<int> dist(N, INF);
vector<bool> visited(N);


void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[source] = 0;
    pq.push({dist[source], source});

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for(auto vpair: g[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(!visited[v])
            {
                if(dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}


int main()
{
    int n, e;
    cin >> n >> e;

    for(int i = 0; i < e; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        g[a].push_back({b, w});
    }

    int source;
    cin >> source;

    dijkstra(source);

    int t;
    cin >> t;
    while(t--)
    {
        int d, dw;
        cin >> d >> dw;
        
        if(dist[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}