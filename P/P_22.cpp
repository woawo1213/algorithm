//수박수박수박수?
#include <bits/stdc++.h>
using namespace std;

string solution(int n)
{
    string answer = "";
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 1)
            answer += "수";
        else
            answer += "박";
    }
    return answer;
}
