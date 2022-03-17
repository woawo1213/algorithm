#include <bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int a[101][101];
bool visited[101][101];
int m, n, k, nx, ny,ret,lx,ly,rx,ry;
void dfs(int y, int x)
{
    visited[y][x] == 1;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
            continue;
        if (a[ny][nx] == 1 && !visited[ny][nx])
            dfs(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> k;
    for(int i=0;i<3;i++)
    {
        cin >> lx >>ly >> rx >> ry;
        for(int l=lx;l<rx;l++)
        {
            for(int h=ly;h<ry;h++)
                a[h][l]=1;
        }
    }



    return 0;
}