//덩치
#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> x, y, score;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int w, h;
        cin >> w >> h;
        x.push_back(w);
        y.push_back(h);
    }

    for (int i = 0; i < n; i++)
    {
        score.push_back(1);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] < x[j] && y[i] < y[j])
                score[i]++;
        }
    }

    for (auto a : score)
        cout << a << " ";

    return 0;
}