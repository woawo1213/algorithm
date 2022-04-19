//체스판 다시 칠하기
#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
vector<string> board;
void wstart(vector<string> b)
{
    cout << "W" << endl;
}
void bstart(vector<string> b)
{
    cout << "B" << endl;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        board.push_back(s);
    }
    cout << "baord: " << board[0] << endl;

    if (board[0][0] == 'W')
    {
        wstart(board);
    }

    if (board[0][0] == 'B')
    {
        bstart(board);
    }

    cout << cnt << " ";

    return 0;
}
