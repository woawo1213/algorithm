//나누어 떨어지는 숫자배열
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    int count = 0;

    for (auto a : arr)
    {
        if (a % divisor == 0)
        {
            answer.push_back(a);
            count++;
        }
    }
    sort(answer.begin(), answer.end());
    if (count == 0)
        answer.push_back(-1);

    return answer;
}