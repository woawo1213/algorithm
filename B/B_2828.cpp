//사과 담기 게임 @
//최적해 구하기
#include <bits/stdc++.h>
using namespace std;
int N, M, j, l, r, ret, box;
int main()
{
    cin >> N >> M >> j;
    l = 1;
    for (int i = 0; i < j; i++)
    {
        r = l + M - 1;
        cin >> box;
        if (box >= l && box <= r) //안움직이는 경우
            continue;
        else
        {
            if (box < l)
            {
                ret += (l - box);
                l = box;
            }
            else
            {
                l += (box - r);
                ret += (box - r);
            }
        }
    }

    cout << ret << "\n";
    return 0;
}