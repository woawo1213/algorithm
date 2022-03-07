//구간합은 psum , psum[i]=psum[i-1]+a[i]
//최대값은 최소값을 설정하고 최대값으로....
//최소값은 최대값을 설정하고 최소값으로....
#include <bits/stdc++.h>
using namespace std;
int seq, day, temp, psum[100001], ret = -10000004;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> seq >> day;
    for (int i = 1; i <= seq; i++)
    {
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    for (int i = day; i <= seq; i++)
    {
        ret = max(ret, psum[i] - psum[i - day]);
    }
    cout << ret << endl;

    return 0;
}