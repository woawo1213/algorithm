//카펫 @
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int tmp = (brown - 4) / 2;
    for (int i = 1; i <= yellow; i++)
    {
        if (yellow % i == 0)
        {
            if (yellow / i + i == tmp)
            {
                answer.push_back((yellow / i) + 2);
                answer.push_back(i + 2);
                break;
            }
        }
    }
    sort(answer.begin(), answer.end());
    reverse(answer.begin(), answer.end());
    return answer;
}