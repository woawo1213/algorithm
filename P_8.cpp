//가운데 글자 가져오기
#include <bits/stdc++.h>

using namespace std;

string solution(string s)
{
    string answer = "";
    int cent = s.size() / 2;
    if (s.length() % 2 == 0)
    {
        answer += s[cent - 1];
        answer += s[cent];
    }
    else
    {
        answer += s[cent];
    }

    return answer;
}