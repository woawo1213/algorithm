#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

long long solution(long long n)
{
    ll answer = 0;
    ll a = sqrt(n);
    if (a * a == n)
    {
        answer = pow(a + 1, 2);
    }
    else
    {
        answer = -1;
    }
    return answer;
}