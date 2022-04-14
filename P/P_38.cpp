//모의고사
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    vector<int> result;
    int count1 = 0, count2 = 0, count3 = 0;
    vector<int> s1 = {1, 2, 3, 4, 5};                // 5
    vector<int> s2 = {2, 1, 2, 3, 2, 4, 2, 5};       // 8
    vector<int> s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}; // 10

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == s1[i % 5])
            count1++;
    }

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == s2[i % 8])
            count2++;
    }

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == s3[i % 10])
            count3++;
    }

    if ((count1 >= count2) && (count1 >= count3))
    {
        answer.push_back(1);
    }

    if ((count2 >= count1) && (count2 >= count3))
    {
        answer.push_back(2);
    }

    if ((count3 >= count2) && (count3 >= count1))
    {
        answer.push_back(3);
    }

    return answer;
}