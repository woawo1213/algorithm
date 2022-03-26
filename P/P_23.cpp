//하샤드 수
#include <bits/stdc++.h>
using namespace std;
bool solution(int x)
{
    bool answer = true;
    vector<int> a;
    int tmp = x, s;

    do
    {
        a.push_back(tmp % 10);
        tmp /= 10;
    } while (tmp > 0);
    s = accumulate(a.begin(), a.end(), 0);

    if (x % s == 0)
        answer = true;
    else
        answer = false;

    return answer;
}