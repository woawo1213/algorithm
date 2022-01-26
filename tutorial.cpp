#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    {
        /* type */
        cout << "######################type######################" << endl;
        cout << endl;
        string a = "wow fantastic";
        cout << a << endl;
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        string s = "123";
        s[0]++;
        cout << s << "\n";
        cout << " s[0]: " << s[0] << " s[1]: " << s[1] << " s[2]: " << s[2] << endl;

        // int 형 변수는 약 20억까지 표현가능, 넘어가는건 long long 사용
        // float 보단 double
    }

    {
        /* enter */
        cout << "######################enter######################" << endl;
        cout << endl;
        // cin은 개행문자(띄어쓰기, 엔터)구분함
        int n;
        // cin >> n;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << i << endl;
        // }

        //개행문자가 포함된 문자열 입력받기
        // string s;
        // getline(cin, s);
        // cout << s << endl;
    }

    {
        /* printf */
        cout << "######################printf######################" << endl;
        cout << endl;
        //띄어쓰기는 cout<< [ ] << " ";
        int a = 1;
        char s = 'a';
        string str = "iron man";
        double b = 1.223123;
        printf("avengers : %d\n", a);
        printf("avengers : %c\n", s);
        printf("avengers : %s\n", str.c_str());
        printf("avengers : %lf\n", b);
    }

    {
        /* type change */
        cout << "######################type change######################" << endl;
        cout << endl;
        double ret = 2.12345;
        int n = 2;
        int a = (int)round(ret / double(n)); // double 끼리 계산 후 int형변환 후 계산
        cout << a << "\n";

        // string to integer, integer to string -> ascii
        char ca = 'a';
        cout << (int)ca - 97 << "\n";
        cout << (int)ca - 'a' << "\n";
    }

    {
        /* string */
        cout << "######################string######################" << endl;
        cout << endl;
        string dopa = "life is good";
        cout << dopa << endl;
        cout << dopa.substr(0, 3) << endl; //문자열 발췌
        reverse(dopa.begin(), dopa.end());
        reverse(dopa.begin(), dopa.begin() + 3); //이런식도 가능
        cout << dopa << endl;
    }

    {
        /* pair&tuple */
        cout << "######################pair&tuple######################" << endl;
        cout << endl;
        pair<int, int> pi;
        tuple<int, int, int> tl;
        int a, b, c;
        pi = {1, 2};
        tl = make_tuple(1, 2, 3);
        tie(a, b) = pi;
        cout << a << " : " << b << "\n";
        tie(a, b, c) = tl;
        cout << a << " : " << b << " : " << c << "\n";
    }

    {
        /* vector */
        cout << "######################vector######################" << endl;
        cout << endl;
        vector<int> v;
        for (int i = 1; i <= 10; i++)
            v.push_back(i);
        for (int a : v)
            cout << a << " ";
        cout << "\n";
        v.pop_back();
        for (int a : v)
            cout << a << " ";
        cout << "\n";
        v.erase(v.begin(), v.begin() + 1);
        for (int a : v)
            cout << a << " ";
        cout << "\n";
        auto a = find(v.begin(), v.end(), 100); // find(vector의 함수가 아니라 algorithm에서 제공하는 함수
        if (a == v.end())
            cout << "not found" << endl;
        fill(v.begin(), v.end(), 10);
        for (int a : v)
            cout << a << " ";
        cout << "\n";
        v.clear();
        for (int a : v)
            cout << a << " ";
        cout << "\n";
    }

    {
        /* fill & memset */
        cout << "######################fill & memset######################" << endl;
        cout << endl;
        // vector 초기화 하기
        int n = 10;
        vector<int> v[10];   // v벡터를 10개를 생성합니다.
        vector<int> v(n, 0); // 0이라는 value를 가진 n개의 벡터를 생성
        // vector로 2차원 배열 매트릭스 만들기
        vector<vector<int>> checked;
        vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
        // fill로도 초기화할 수 있다.
        fill(v.begin(), b.end(), 0);
        //배열초기화 shortcut : 전체 0으로 초기화한다. 일부 컴파일러에서 통하지 않을 수도있습니다.
        int dp[10] = {
            0,
        };
        int dp[10][10] = {{
            0,
        }};
        fill(dist, dist + MAX_N, 0);
        //부분초기화 : 0번째를 0, 1번째를 1로 초기화한다.
        int a[n] = {0, 1};
        memset(check, 0, sizeof(check));
        // fill을 사용한 2차원 배열 초기화는 이렇습니다.
        for (int i = 0; i < 10; i++)
            fill(dp[i], dp[i] + 10, 0);
        fill(&arr[0][0], &arr[0][0] + n * m, k) // 이런식으로 한번에 초기화를 할 수 있습니다.
    }

    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }

    return 0;
}