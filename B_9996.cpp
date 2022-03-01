#include <bits/stdc++.h>
using namespace std;
int cnt, arr[104];
string pattern, s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cnt;
    cin >> pattern;

    for (int i = 0; i < cnt; i++)
    {
        cin >> s;
    }

    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] == 1)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }

    return 0;
}