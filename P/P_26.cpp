//이사한 문자 만들기
#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    string answer = "";
    istringstream iss(s);
    string buffer;
    vector<string> tmp;

    while (getline(iss, buffer, ' '))
    {
        tmp.push_back(buffer);
    }
    for (int i = 0; i < tmp.size(); i++)
    {
        for (int j = 0; j < tmp[i].length(); j++)
        {
            remove(tmp[i].begin(), tmp[i].end(), ' ');
            if (j == 0)
                tmp[i][j] = toupper(tmp[i][j]);
            else if (j % 2 == 1)
                tmp[i][j] = tolower(tmp[i][j]);
            else
                tmp[i][j] = toupper(tmp[i][j]);
        }
        answer.append(tmp[i]);
        answer.append(" ");
    }
    answer.erase(answer.end() - 1, answer.end());

    return answer;
}

int main()
{
    cout << solution("try") << endl;
    return 0;
}
