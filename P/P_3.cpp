//신규 아이디 추천
#include <bits/stdc++.h>
using namespace std;
string solution(string new_id)
{
    //1단계
    for (int i = 0; i < new_id.length(); i++)
        //소문자 변경: tolower, 대문자 변경: toupper
        new_id[i] = tolower(new_id[i]);
    //2단계
    //문자열 특정 인자들 지우기
    string s = "~!@#$%^&*()=+[{]}:?,<>/";
    for (int i = 0; i < 23; i++)
    {
        new_id.erase(remove(new_id.begin(), new_id.end(), s[i]), new_id.end());
    }
    //3단계
    for (int i = 1; i < new_id.length();)
    {
        if (new_id[i - 1] == '.' && new_id[i] == '.')
        {
            new_id.erase(new_id.begin() + i);
            continue;
        }
        else
            i++;
    }
    //4단계
    if (new_id.front() == '.')
        new_id.erase(new_id.begin());

    if (new_id.back() == '.')
        new_id.erase(new_id.end() - 1);
    //5단계
    if (new_id == "")
        new_id += "a";
    //6단계
    if (new_id.length() >= 16)
    {
        new_id.erase(new_id.begin() + 15, new_id.end());
        if (new_id.back() == '.')
            new_id.erase(new_id.end() - 1);
    }
    //7단계
    if (new_id.length() < 3)
    {
        for (int i = new_id.length(); i < 3; i++)
        {
            new_id += new_id.back();
        }
    }

    return new_id;
}
