#include <bits/stdc++.h>
using namespace std;
int people, cnt[26];
string name, ret;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> people;
    for (int i = 0; i < people; i++)
    {
        cin >> name;
        cnt[name[0] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] >= 5)
            ret += i + 'a';
    }
    if (ret.size())
        cout << ret << endl;
    else
        cout << "PREDAJA" << endl;

    return 0;
}