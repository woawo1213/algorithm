//없는 숫자 더하기
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers)
{
    int answer = 45;
    answer = answer - accumulate(numbers.begin(), numbers.end(), 0);
    return answer;
}