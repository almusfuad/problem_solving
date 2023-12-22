#include<bits/stdc++.h>
using namespace std;
const int INF = 100;
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));

    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> graph[i][j];
    }

    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
        }
    }

    for(int i =0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(graph[i][j] == INF)
                cout << 100 << " ";
            else
                cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}