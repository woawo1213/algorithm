//네트워크
#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int y, x, ny, nx, t;
int a[204][204];
bool visited[204][204];
void dfs(int y, int x)
{
    cout << y << " : " << x << '\n';

    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= t || nx >= t)
            continue;
        if (a[ny][nx] == 1 && !visited[ny][nx])
        {
            dfs(ny, nx);
        }
    }
    return;
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (computers[i][j] == 1)
                a[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    t = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && !visited[i][j])
            {
                answer++;
                dfs(i, j);
            }
        }
    }
    return answer;
}

int main()
{
    vector<vector<int>> vv = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    int n = 3;
    int result;
    result = solution(n, vv);
    cout << result;

    return 0;
}