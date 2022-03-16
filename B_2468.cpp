#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int nx, ny, n, ret = 1, temp;
int b[101][101], e[101][101];
bool visited[101][101];
void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            continue;
        if (e[ny][nx] == 0 && !visited[ny][nx])
            dfs(ny, nx);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int d = 1; d < 101; d++)
    {
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        temp = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (e[i][j] == 1)
                    continue;
                if (b[i][j] <= d)
                    e[i][j] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (e[i][j] == 0 && !visited[i][j])
                {
                    dfs(i, j);
                    temp++;
                }
            }
        }
        ret = max(ret, temp);
    }

    cout << ret << "\n";
    return 0;
}