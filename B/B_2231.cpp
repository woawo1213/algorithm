//분해합
#include <bits/stdc++.h>

using namespace std;
int n, mini;
vector<int> tmp;
int main()
{
    cin >> n;

    while (n > 0)
    {
        tmp.push_back(n % 10);
        n /= 10;
    }

    reverse(tmp.begin(), tmp.end());

        return 0;
}