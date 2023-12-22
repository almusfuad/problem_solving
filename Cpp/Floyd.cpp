#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9+7;
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    for(int i = 0; i < n; i++)
    {
        for(int j =0 ; j < n; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j] == -1)
                graph[i][j] = INF;
        }
            
    }

    int dms = 0;
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    for(int i =0; i <n; i++)
    {
        for(int j =0; j <n; j++)
        {
            if(graph[i][j] != INF)
                dms = max(dms, graph[i][j]);
        }
    }

    cout << dms << endl;

    return 0;
}