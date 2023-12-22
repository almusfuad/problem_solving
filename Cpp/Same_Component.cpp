#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3+7;
vector<string> g;
bool visited[N][N];
vector<pii> direc = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;
int si, sj, di, dj;
bool canReach = false;



bool isValid(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m && g[i][j] == '.');
}

void dfs(int i, int j)
{
    if(visited[i][j] || !isValid(i, j)) return;

    visited[i][j] = true;

    // check the current == destinition
    if(i == di && j == dj)
    {
        canReach = true;
        return;
    }

    for(auto d: direc)
    {
        if(isValid(i+d.first, j+d.second))
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

    cin >> si >> sj >> di >> dj;

    dfs(si, sj);

    if(canReach)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}