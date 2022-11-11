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
        int min=*min_element(arr.begin(),arr.end());
        for(auto e:arr){
            if(e!=min)
                answer.push_back(e);
        }        
    }

    return answer;
}