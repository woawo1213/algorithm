//콜라츠 추측
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solution(int num)
{
    int answer = 0;
    ll col = num;
    while (col != 1)
    {
        if (col % 2 == 0)
            col /= 2;
        else
            col = col * 3 + 1;

        answer++;
        if (answer >= 500)
        {
            answer = -1;
            break;
        }
    }
    return answer;
}