#include <bits/stdc++.h>
using namespace std;
int n, m, a[150001], cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    if (m > 200000)
        cout << 0 << "\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == m)
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }
}