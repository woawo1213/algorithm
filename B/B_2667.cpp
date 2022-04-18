//단지번호붙이기
#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int nx, ny, n, ret, count_apt;
vector<int> apt;
int b[26][26];
bool visited[26][26];
void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n)
            continue;
        if (b[ny][nx] == 0 && !visited[ny][nx])
            {
                count_apt++;
                dfs(ny, nx);
            }
    }
    apt.push_back(count_apt);
    count_apt=0;
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

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (b[i][j] == 1 && !visited[i][j])
            {
                ret++;
                dfs(i, j);
            }
        }
    }
    sort(apt.begin(),apt.end());

    cout << ret << "\n";

    for(auto a:apt)
        cout<<a<<"\n";
    return 0;
}