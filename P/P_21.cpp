//서울에서 김서방 찾기
#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> seoul)
{
    string answer = "";
    int i = 0;
    for (auto a : seoul)
    {
        if (a == "Kim")
            answer = "김서방은 " + to_string(i) + "에 있다";
        i++;
    }

    return answer;
}