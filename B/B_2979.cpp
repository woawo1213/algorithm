#include <bits/stdc++.h>
using namespace std;
int A, B, C, in, out, cnt[104], sum;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++)
    {
        cin >> in >> out;
        for (int j = in; j < out; j++)
            cnt[j]++;
    }
    for (int i = 1; i < 100; i++)
    {
        if (cnt[i] == 1)
            sum += A;
        else if (cnt[i] == 2)
            sum += B * 2;
        else if (cnt[i] == 3)
            sum += C * 3;
    }

    cout << sum << " ";
    return 0;
}