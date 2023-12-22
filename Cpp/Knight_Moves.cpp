#include<bits/stdc++.h>
using namespace std;


typedef pair<int, int> pii;
const int N = 1e2 + 7;
int chess[N][N];
bool visited[N][N] = {false};
int moves[N][N];
vector<pii> direc = {{1, -2}, {-1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}};
int n, m;
int ki, kj;
int qi, qj;

bool isvalid(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m && !visited[i][j]);
}

int bfs(int ki, int kj)
{
    queue<pii> q;
    q.push({ki, kj});
    visited[ki][kj] = true;
    moves[ki][kj] = 0;

    while(!q.empty())
    {
        int ni = q.front().first;
        int nj = q.front().second;
        q.pop();

        if(qi  == ni && qj  == nj)
            return moves[ni][nj];

        for(auto d: direc)
        {
            int ci = ni+d.first;
            int cj = nj+d.second;

            if(isvalid(ci, cj))
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                moves[ci][cj] = moves[ni][nj] + 1;
            }
        }
    }
    return -1;
}

void reset_moves_vis()
{
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            moves[i][j] = 0;
            visited[i][j] = false;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        cin >> ki >> kj;
        cin >> qi >> qj;

        int result = bfs(ki, kj);
        cout << result << endl;
        reset_moves_vis();
    }
    return 0;
}