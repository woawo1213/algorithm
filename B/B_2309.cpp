#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    for (int i = 0; i < 9; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    do
    {
        int sum = 0;
        for (int i = 0; i < 7; i++)
            sum += v[i];
        if (sum == 100)
            break;

    } while (next_permutation(v.begin(), v.end()));
    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}