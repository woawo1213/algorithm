#include <bits/stdc++.h>
using namespace std;
int cnt, arr[104];
string pattern, s, pre, suf;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cnt;
    cin >> pattern;

    int pos = pattern.find('*');
    pre = pattern.substr(0, pos);
    suf = pattern.substr(pos + 1);

    for (int i = 0; i < cnt; i++)
    {
        cin >> s;
        if (pre.size() + suf.size() > s.size())
        {
            cout << "NE" << endl;
        }
        else
        {
            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
            {
                cout << "DA" << endl;
            }
            else
            {
                cout << "NE" << endl;
            }
        }
    }

    return 0;
}