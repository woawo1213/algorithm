//블랙잭
#include <bits/stdc++.h>
using namespace std;
int n, m, m_cnt = 0;
vector<int> cnt, ret;

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        cnt.push_back(tmp);
    }

    //조합의 개수가 3개까지만 for 문 돌리고 그 이상은 재귀로 푼다.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int tmp = cnt[i] + cnt[j] + cnt[k];
                ret.push_back(tmp);
            }
        }
    }

    sort(ret.begin(), ret.end());
    for (auto a : ret)
    {
        if (a <= m)
        {
            m_cnt = max(m_cnt, a);
        }
    }
    cout << m_cnt;

    return 0;
}