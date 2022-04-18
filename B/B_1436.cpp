//영화감독 숌 @
#include <bits/stdc++.h>
using namespace std;
int n, cnt, movie = 666;
string s;
int main()
{
    cin >> n;

    while (1)
    {
        s = to_string(movie);

        if (s.find("666") != -1)
        {
            cnt++;
        }

        if (cnt == n)
            break;

        movie++;
    }
    cout << movie << " ";
    return 0;
}