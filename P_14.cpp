//문자열 내 p와 y의 개수
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cp = 0, cy = 0;

    for (auto a : s)
    {
        if (a == 'p' || a == 'P')
            cp++;

        if (a == 'y' || a == 'Y')
            cy++;

        if (cp != cy)
            answer = false;
        else if (cp == 0 && cy == 0)
            answer = true;
        else
            answer = true;
    }
    return answer;
}