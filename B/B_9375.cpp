#include <bits/stdc++.h>
using namespace std;
int n,t;
string s1,s2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while(t--)
    {
        map<string, int>_map;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> s1 >> s2;
            _map[s2]++;
        }
        long long ret = 1;
        for(auto c:_map)
        {
            ret*=((long long)c.second+1);
        }
        ret--;
        cout<<ret<<endl;
    }

    




    return 0;
}