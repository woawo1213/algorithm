//타겟넘버

// dfs
// 5 5
// 1 0 1 0 1
// 1 1 0 0 1
// 0 0 0 1 1
// 0 0 0 1 1
// 0 1 0 0 0
#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int m, n, k, y, x, ret, ny, nx, t;
int a[104][104];
bool visited[104][104];
void dfs(int y, int x)
{
    cout << y << " : " << x << '\n';
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;
        if (a[ny][nx] == 1 && !visited[ny][nx])
        {
            dfs(ny, nx);
        }
    }
    return;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1 && !visited[i][j])
            {
                ret++;
                dfs(i, j);
            }
        }
    }
    cout << ret << '\n';
    return 0;
}

// bfs
// 5 5
// 0 0
// 4 4
// 1 0 1 0 1
// 1 1 1 0 1
// 0 0 1 1 1
// 0 0 1 1 1
// 0 0 1 1 1

// #include <bits/stdc++.h>
// using namespace std;
// const int max_n = 104;
// int dy[4] = {-1, 0, 1, 0};
// int dx[4] = {0, 1, 0, -1};
// int n, m, a[max_n][max_n], visited[max_n][max_n], y, x, sy, sx, ey, ex;
// int main()
// {
//     scanf("%d %d", &n, &m);
//     cin >> sy >> sx;
//     cin >> ey >> ex;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     queue<pair<int, int>> q;
//     visited[sy][sx] = 1;
//     q.push({sy, sx});
//     while (q.size())
//     {
//         tie(y, x) = q.front();
//         q.pop();
//         for (int i = 0; i < 4; i++)
//         {
//             int ny = y + dy[i];
//             int nx = x + dx[i];
//             if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0)
//                 continue;
//             if (visited[ny][nx])
//                 continue;
//             visited[ny][nx] = visited[y][x] + 1;
//             q.push({ny, nx});
//         }
//     }
//     printf("%d\n", visited[ey][ex]);
//     // 최단거리 디버깅
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << visited[i][j] << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }
