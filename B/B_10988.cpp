#include <bits/stdc++.h>
using namespace std;
string word, word_reverse;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> word;
    word_reverse = word;
    reverse(word_reverse.begin(), word_reverse.end());
    if (word == word_reverse)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}