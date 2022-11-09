// K번째수
#include <bits/stdc++.h>

using namespace std;
vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> tmp = {};
        int idx[3];
        for (int j = 0; j < 3; j++)
            idx[j] = commands[i][j];

        for (int k = idx[0] - 1; k < idx[1]; k++)
            tmp.push_back(array[k]);
        //정렬
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[idx[2] - 1]);
        tmp.clear();
    }

    return answer;
}
