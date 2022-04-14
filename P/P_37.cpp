// h-index
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> citations)
{
    int answer = 0;
    int count = 0;

    sort(citations.begin(), citations.end());

    for (int i = 1; i <= citations.size(); i++)
    {
        for (int j = 0; j < citations.size(); j++)
        {
            if (i <= citations[j])
                count++;
        }
        if (i <= count)
            answer = i;
        count = 0;
    }

    return answer;
}