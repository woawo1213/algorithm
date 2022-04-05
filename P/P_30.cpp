#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        answer += digit;
    }

    return answer;
}