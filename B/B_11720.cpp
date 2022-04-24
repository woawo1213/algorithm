//숫자의 합
#include <bits/stdc++.h>

using namespace std;

int n, sum = 0;
int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%1d", &num);
        sum += num;
    }
    cout << sum << "\n";

    return 0;
}