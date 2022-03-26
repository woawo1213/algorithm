//제일 작은 수 제거하기
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    if (arr.size() == 1)
        answer.push_back(-1);
    else
    {
        int tmp = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            tmp = min(tmp, arr[i]);
        }
        auto it = remove(arr.begin(), arr.end(), tmp);
        arr.resize(it - arr.begin());
    }

    return answer;
}