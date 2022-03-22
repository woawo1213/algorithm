//부족한 금액 계산하기
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long solution(int price, int money, int count)
{
    ll answer;
    ll sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += price * i;
    }

    if ((ll)money - sum < 0)
        answer = sum - money;
    else
        answer = 0;

    return answer;
}