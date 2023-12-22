#include<bits/stdc++.h>
using namespace std;
const int N = 105;
const long long INF = 1e18;
long long dist[N][N];

void initialDist(int n)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
}

void floyd_warshal(int n)
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialDist(n);
    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dist[a][b] = min(dist[a][b], (long long)w);
    }

    floyd_warshal(n);
    int q;
    cin >> q;
    while(q--)
    {
        int s, d;
        cin >> s >> d;
        dist[s][d] == INF ? cout << "-1" << endl : cout << dist[s][d] << endl;
    }
    return 0;
}