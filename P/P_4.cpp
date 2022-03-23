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
        {
            answer += "L";
            l.x = 0;
            if (a == 1)
                l.y = 0;
            if (a == 4)
                l.y = 1;
            if (a == 7)
                l.y = 2;
        }
        else if (a == 3 || a == 6 || a == 9)
        {
            answer += "R";
            r.x = 2;
            if (a == 3)
                r.y = 0;
            if (a == 6)
                r.y = 1;
            if (a == 9)
                r.y = 2;
        }
        else
        {
            Coordinate t;
            t.x = 1;
            if (a == 2)
                t.y = 0;
            else if (a == 5)
                t.y = 1;
            else if (a == 8)
                t.y = 2;
            else
                t.y = 3;

            int lh = abs(t.y - l.y) + abs(t.x - l.x);
            int rh = abs(t.y - r.y) + abs(t.x - r.x);

            if (lh > rh)
            {
                answer += "R";
                r.y = t.y;
                r.x = t.x;
            }
            else if (lh < rh)
            {
                answer += "L";
                l.y = t.y;
                l.x = t.x;
            }
            else
            {
                if (hand == "left")
                {
                    answer += "L";
                    l.y = t.y;
                    l.x = t.x;
                }
                if (hand == "right")
                {
                    answer += "R";
                    r.y = t.y;
                    r.x = t.x;
                }
            }
        }
    }

    return answer;
}