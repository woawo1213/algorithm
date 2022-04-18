#include <bits/stdc++.h>
using namespace std;
int n, m, k = 3;
vector<int> b;

void print(vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

void combi(int start, vector<int> b)
{
    if (b.size() == 3)
    {
        print(b);
        return;
    }
    for (int i = start; i < n; i++)
    {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    combi(0, b);

    return 0;
}