//머지가 1이 되는 수 찾기
#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    int tmp = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 1)
            tmp = min(tmp, i);
    }

    answer = tmp;
    return answer;
}