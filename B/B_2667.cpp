//단지번호붙이기
#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int y, x, ny, nx, n, ret, cnt;
vector<int> apt;
int a[26][26];
bool visited[26][26];
void dfs(int y, int x)
{
    visited[y][x] = 1;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && !visited[i][j])
            {
                ret++;
                cnt = 0;
                dfs(i, j);
                apt.push_back(cnt);
            }
        }
    }
    sort(apt.begin(), apt.end());

    cout << ret << "\n";

    for (auto a : apt)
        cout << a << "\n";
    return 0;
}