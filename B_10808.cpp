// counting array
#include <bits/stdc++.h>
using namespace std;
int alphabet[26];
string word;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            alphabet[word[i] - 'a']++;
        }
    }

    /* better way
    for (char c : word)
    {
        alphabet[c - 'a']++;
    }
    */

    for (int i = 0; i < 26; i++)
    {
        cout << alphabet[i] << " ";
    }
    return 0;
}