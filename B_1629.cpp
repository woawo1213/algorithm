#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b)
{
    if (b == 1)
        return a % c;
    ll _c = go(a, b / 2);
    _c = (_c * _c) % c;
    if (b % 2)
        _c = (_c * a) % c;
    return _c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b) << "\n";
    return 0;
}