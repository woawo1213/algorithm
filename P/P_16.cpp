//문자열 다루기 기본
#include <bits/stdc++.h>

using namespace std;
bool answer = true;
bool solution(string s)
{

    if (s.length() == 4 || s.length() == 6)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < '0' || s[i] > '9')
                answer = false;
            break;
        }
    }
    else
        answer = false;

    return answer;
}