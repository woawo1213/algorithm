//단어 공부
#include <bits/stdc++.h>

using namespace std;
string s;
int arr[26];
int maxi = 0, cnt = 0, index = 0;
vector<int> ss;
int main()
{
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        // 대문자 65 소문자 97
        s[i] = toupper(s[i]);
        arr[s[i] - 65]++;
    }

    for (int i = 0; i < 26; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == maxi)
        {
            index = i;
            cnt++;
        }
    }

    if (cnt == 1)
    {
        cout << (char)(index + 65)
             << "\n";
    }
    else
    {
        cout << "?"
             << "\n";
    }

    return 0;
}