//핸드폰 번호 가리기
#include <bits/stdc++.h>
using namespace std;

string solution(string phone_number)
{
    string answer = "";

    for (int i = 0; i < phone_number.length(); i++)
    {
        if (i < phone_number.length() - 4)
            answer += "*";
        else
            answer += phone_number[i];
    }
    return answer;
}