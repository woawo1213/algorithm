//숫자 문자열과 영단어
#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
    int answer = 0;
    // 입력받은 문자열에서 지정된 문자열로 대체 
    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");

    answer = stoi(s);
    return answer;
}
