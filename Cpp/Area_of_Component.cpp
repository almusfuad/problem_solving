#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e3+7;
vector<string> g;
bool visited[N][N];
int n, m;
vector<pii> direc = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};
int moves;

bool isValid(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m && g[i][j] == '.');
}

void dfs(int i, int j)
{
    if(visited[i][j] || !isValid(i, j)) return;

    visited[i][j] = true;
    moves++;

    for(auto d: direc)
    {
        dfs(i+d.first, j+d.second);
    }
}

int main()
{
    cin >> n >> m;

    for(int i =0; i < n; i++)
    {
        string x;
        cin >> x;

        g.push_back(x);
    }

    int minMove = INT_MAX;
    for(int i =0; i < n; i++)
    {
        for(int j =0; j<m; j++)
        {
            if(!visited[i][j] && g[i][j] == '.')
            {
                moves = 0;
                dfs(i, j);
                minMove = min(minMove, moves);
            }
        }
    }

    cout << (minMove != INT_MAX ? minMove : -1) << endl;
    return 0;
}