//자연수 뒤집어 배열로 만들기
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;
    int remain_num;
    while (1)
    {
        answer.push_back(n % 10);
        n /= 10;
        if (n == 0)
            break;
    }

    return answer;
}
