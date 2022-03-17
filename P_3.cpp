//신규 아이디 추천
#include <bits/stdc++.h>
using namespace std;

string solution(string new_id)
{
    string answer = "";
    // 1
    for (int i = 0; i < new_id.length(); i++)
        new_id[i] = tolower(new_id[i]);
    // 2
    string s = "~!@#$%^&*()=+[{]}:?,<>/";

    for (int i = 0; i < 23; i++)
    {
        new_id.erase(remove(new_id.begin(), new_id.end(), s[i]), new_id.end());
    }
    // 3
    // if (s.find(".."))
    //     s = regex_replace(s, regex(".."), ".");
    // 4
    if (new_id.front() == '.')
        s.erase(s.begin());

    if (new_id.back() == '.')
        s.erase(s.begin() + s.length());

    // 5
    // 6
    if (new_id.length() >= 16)
        s
            // 7

            return new_id;
}
int main()
{
    string t = "...!@BaT#*..y.abcdefghijklm";
    cout << solution(t) << endl;
}