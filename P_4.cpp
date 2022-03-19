//키패드 누르기
#include <bits/stdc++.h>
using namespace std;
typedef struct coordinate
{
    int x;
    int y;
} Coordinate;

string solution(vector<int> numbers, string hand)
{
    string answer = "";
    Coordinate l, r;
    l.y = 3;
    l.x = 0;
    r.y = 3;
    r.x = 2;
    for (auto a : numbers)
    {
        if (a == 1 || a == 4 || a == 7)
            answer += "L";
        if (a == 3 || a == 6 || a == 9)
            answer += "R";
        if (a == 2 || a == 5 || a == 8 || a == 0)
        {
        }
    }

    return answer;
}