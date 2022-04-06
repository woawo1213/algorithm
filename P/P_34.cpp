//정수 내림차순으로 배치하기
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    vector<int> v;

    while (1)
    {
        v.push_back(n % 10);
        n /= 10;
        if (n == 0)
            break;
    }
    sort(v.begin(), v.end(), greater<int>());

    answer = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        answer = answer + v[i] * pow(10, i);
    }

    return answer;
}