#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void printV(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
vector<string> split(string input, string delimiter)
{
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}
bool cmp(int a, int b)
{
    return a > b;
}
void b(int a[][5])
{
    a[0][4] = 44;
}
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
        // int n = 10;
        // vector<int> v1[10];   // v벡터를 10개를 생성합니다.
        // vector<int> v2(n, 0); // 0이라는 value를 가진 n개의 벡터를 생성
        // // vector로 2차원 배열 매트릭스 만들기
        // vector<vector<int>> checked;
        // vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
        // // fill로도 초기화할 수 있다.
        // fill(v.begin(), v.end(), 0);
        // //배열초기화 shortcut : 전체 0으로 초기화한다. 일부 컴파일러에서 통하지 않을 수도있습니다.
        // // int dp[10] = {
        // //     0,
        // // };
        // // int dp[10][10] = {{
        // //     0,
        // // }};
        // // fill(dist, dist + MAX_N, 0);
        // //부분초기화 : 0번째를 0, 1번째를 1로 초기화한다.
        // int a[n] = {0, 1};
        // memset(check, 0, sizeof(check));
        // fill을 사용한 2차원 배열 초기화는 이렇습니다.
        // for (int i = 0; i < 10; i++)
        // fill(dp[i], dp[i] + 10, 0);
        // fill(&arr[0][0], &arr[0][0] + n * m, k); // 이런식으로 한번에 초기화를 할 수 있습니다.

        //배열복사
        // memcpy(temp,a ,sizeof(a));
    }

    {
        /* map */
        cout << "######################map######################" << endl;
        cout << endl;
        //레드-블랙 트리구조 내장
        // 데이터 삽입 시 정렬되어 삽입 map
        // 정렬 안된 맵 삽입시 unordered_map
        int v[10];
        unordered_map<string, int> umap;
        umap.insert({"test1", 1});
        umap.emplace("test4", 4);
        umap["test2"] = 2; //권장 방법

        for (auto element : umap)
        {
            cout << element.first << " : " << element.second << '\n';
        }
        auto search = umap.find("test4");
        if (search != umap.end())
        {
            cout << "found: " << search->first << " " << (*search).second << '\n';
        }
        else
        {
            cout << "not found" << '\n';
        }

        umap["test1"]++;
        cout << umap["test1"] << "\n";
        cout << umap.size() << "\n";
        umap.erase("test1");
        cout << umap.size() << "\n";

        // map 순환시 key=first value=second로 탐색
        map<string, int> _map;
        _map["큰돌"]++;
        _map["큰돌"]++;
        for (auto c : _map)
        {
            cout << c.first << " : " << c.second << "\n";
        }
    }

    {
        /* set */
        cout << "######################set######################" << endl;
        cout << endl;
        //중복제거, pair로저장 가능하며 first second로 접근가능
        set<pair<string, int>> _set;
        _set.insert({"test", 1});
        _set.insert({"test", 1});
        _set.insert({"test", 1});
        _set.insert({"test", 1});
        cout << _set.size() << "\n";
    }
    {
        /* multiset */
        cout << "######################multiset######################" << endl;
        cout << endl;
        //중복가능, key value 상관없음 알아서 들어감
        multiset<int> s;
        s.insert(12);
        s.insert(10);
        s.insert(2);
        s.insert(10);
        s.insert(90);
        s.insert(85);
        s.insert(45);
        cout << "Multiset elements after sort\n";
        for (auto it = s.begin(); it != s.end(); it++)
            cout << *it << ' ';
        cout << '\n';
        auto it1 = s.find(10);
        auto it2 = s.find(90);
        // elements from 10 to elements before 90
        // erased
        s.erase(it1, it2);
        cout << "Multiset Elements after erase:\n";
        for (auto it = s.begin(); it != s.end(); it++)
            cout << (*it) << ' ';
        s.erase(s.begin());
        cout << "\n";
        for (auto it = s.begin(); it != s.end(); it++)
            cout << (*it) << ' ';
    }
    {
        /* stack */
        cout << "######################stack######################" << endl;
        cout << endl;
        //문자열 폭발, 괄호만들기, 짝찾기 등에 쓰임 "교차하지 않고"
        stack<string> stk;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stk.push("um");
        stk.push("jun");
        stk.push("sic");
        while (stk.size())
        {
            cout << stk.top() << "\n";
            stk.pop();
        }
    }
    {
        /* queue */
        cout << "######################queue######################" << endl;
        cout << endl;
        // BFS
        queue<int> q;
        q.push(1);
        cout << q.front() << "\n";
        q.pop();
        cout << q.size() << "\n";
    }
    {
        /* dequeue */
        cout << "######################dequeue######################" << endl;
        cout << endl;
        deque<int> dq;
        dq.push_front(1);
        dq.push_back(2);
        dq.push_back(3);
        cout << dq.front() << endl;
        cout << dq.back() << endl;
        cout << dq.size() << endl;
        dq.pop_back();
        dq.pop_front();
        cout << dq.size() << endl;
    }
    {
        /* pqueue */
        cout << "######################pqueue######################" << endl;
        cout << endl;
        //다익스트라, 그리드
        priority_queue<int, vector<int>, greater<int>> pq;
        // priority_queue<int, vector<int>, less<int>>pq;
        pq.push(5);
        pq.push(4);
        pq.push(3);
        pq.push(2);
        pq.push(1);
        cout << pq.top() << endl;
    }
    {
        /* permutation */
        cout << "######################permutation######################" << endl;
        cout << endl;
        int a[3] = {1, 2, 3};
        vector<int> v;
        for (int i = 0; i < 3; i++)
            v.push_back(a[i]);
        do
        {
            printV(v);
        } while (next_permutation(v.begin(), v.end()));
        cout << "---------------------------" << endl;
        v.clear();
        for (int i = 2; i >= 0; i--)
            v.push_back(a[i]);
        do
        {
            printV(v);
        } while (next_permutation(v.begin(), v.end()));
    }
    {
        /* string split */
        cout << "######################string split######################" << endl;
        cout << endl;
        string s = "if i cloud save the time in a bottle, the first things that i'd like to do.";
        string d = " ";
        vector<string> a = split(s, d);
        for (string b : a)
            cout << b << "\n";
    }
    {
        /* lower/upper bound */
        cout << "######################lower/upper bound######################" << endl;
        cout << endl;
        vector<int> v;
        int a[5] = {1, 2, 2, 2, 3}; //배열이나 벡터가 정렬되어 있어야함.
        for (int i = 0; i < 5; i++)
        {
            v.push_back(a[i]);
        }
        int x = 2;
        int c = (int)(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x));
        int f = (int)(lower_bound(v.begin(), v.end(), x) - v.begin());
        int t = (int)(upper_bound(v.begin(), v.end(), x) - v.begin());
        int f2 = *lower_bound(v.begin(), v.end(), x);
        int t2 = *upper_bound(v.begin(), v.end(), x);
        printf("%d의 개수: %d, 시작되는점: %d 끝나는점: %d\n", x, c, f, t);
        printf("lower bound start point value: %d, upper bound start point value: %d\n", f2, t2);

        c = (int)(upper_bound(a, a + 5, x) - lower_bound(a, a + 5, x));
        f = (int)(lower_bound(a, a + 5, x) - a);
        t = (int)(upper_bound(a, a + 5, x) - a);
        f2 = *lower_bound(a, a + 5, x);
        t2 = *upper_bound(a, a + 5, x);
        printf("%d의 개수: %d, 시작되는점: %d 끝나는점: %d\n", x, c, f, t);
        printf("lower bound start point value: %d, upper bound start point value: %d\n", f2, t2);

        typedef long long ll;
        vector<int> aa;
        for (int i = 1; i <= 3; i++)
            aa.push_back(i);
        for (int i = 5; i <= 10; i++)
            aa.push_back(i);
        cout << lower_bound(aa.begin(), aa.end(), 4) - aa.begin() << endl;

        aa.clear();
        for (int i = 2; i <= 5; i++)
            aa.push_back(i);
        aa.push_back(7);
        cout << upper_bound(aa.begin(), aa.end(), 6) - aa.begin() << endl;
        cout << lower_bound(aa.begin(), aa.end(), 6) - aa.begin() << endl;
        cout << upper_bound(aa.begin(), aa.end(), 9) - aa.begin() << endl;
        cout << lower_bound(aa.begin(), aa.end(), 9) - aa.begin() << endl;
        cout << upper_bound(aa.begin(), aa.end(), 0) - aa.begin() << endl;
        cout << lower_bound(aa.begin(), aa.end(), 0) - aa.begin() << endl;
    }
    {
        /* rotate */
        cout << "######################rotate######################" << endl;
        cout << endl;
        vector<int> v;
        for (int i = 1; i < 10; ++i)
            v.push_back(i);
        // first, middle, last
        //  rotate(v.begin(), v.begin()+v.size()+1, v.end());
        // 2 3 4 5 6 7 8 9 1
        rotate(v.begin(), v.begin() + v.size() - 1, v.end());
        // 9 1 2 3 4 5 6 7 8
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
            cout << ' ' << *it;
        cout << '\n';
    }
    {
        /* accumulate */
        cout << "######################accumulate######################" << endl;
        cout << endl;
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = accumulate(v.begin(), v.end(), 0);
        cout << sum << endl;
    }
    {
        /* max element */
        cout << "######################max element######################" << endl;
        cout << endl;
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int a = *max_element(v.begin(), v.end());
        cout << a << endl;
    }
    {
        /* array ratate */
        cout << "######################array ratate######################" << endl;
        cout << endl;
        vector<int> v;
        for (int i = 1; i <= 6; i++)
            v.push_back(i);
        int i = 1;
        int temp = v[i];
        v[i] = v[i + 1];
        v[i + 1] = v[i + 2];
        v[i + 2] = v[i + 3];
        v[i + 3] = temp;
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }
    {
        /* callby */
        cout << "######################algo######################" << endl;
        cout << endl;
        /*
        void b(int a)
        {
            a = 2;
        }
        void b2(int & a)
        {
            a = 2;
        }
        void b3(int * a)
        {
            *a = 3;
        }
        int a = 1;
        b(a);
        printf("%d\n", a); // 1
        b2(a);
        printf("%d\n", a); // 2
        b3(&a);
        printf("%d\n", a); // 3

        */
    }
    {
        /* 문자열 찾기 */
        cout << "######################문자열 찾기######################" << endl;
        cout << endl;
        // if(a.find("FBI")!=string::npos)
    }
    {
        /* n진법 변환 */
        cout << "######################n진법 변환######################" << endl;
        cout << endl;
        vector<int> v;
        int n = 100;
        int b = 2;
        while (n > 1)
        {
            v.push_back(n % b);
            n /= b;
        }
        if (n == 1)
            v.push_back(1);
        reverse(v.begin(), v.end());
        for (int a : v)
        {
            if (a >= 10)
                cout << char(a + 55);
            else
                cout << a;
        }
        cout << endl;
    }
    {
        /* decendsing order*/
        cout << "######################decendsing order######################" << endl;
        cout << endl;
        vector<int> v;
        for (int i = 1; i <= 6; i++)
            v.push_back(i);
        sort(v.begin(), v.end(), greater<int>());
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }
    {
        /* custom order */
        cout << "######################custom order######################" << endl;
        cout << endl;
        vector<int> v;
        for (int i = 1; i <= 6; i++)
            v.push_back(i);
        sort(v.begin(), v.end(), cmp);
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }
    {
        /* printf */
        cout << "######################printf######################" << endl;
        cout << endl;
        double a = 1.23456789;
        int b = 2;
        printf("%.6lf\n", a);
        printf("%03d\n", b); // 03보다 1개 적게 출력
    }
    {
        /* 2d arr modify */
        cout << "######################2d arr modify######################" << endl;
        cout << endl;
        int a[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}};
        b(a);
        cout << a[0][4] << endl;
    }
    {
        /* 2d arr roatate */
        cout << "######################2d arr roatate######################" << endl;
        cout << endl;
        /*
        void rotate90(vector<vector<int>> &key)
        {
            int m = key.size();
            vector<vector<int>> temp(m, vector<int>(m, 0));
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    temp[i][j] = key[j][m - i - 1];
                }
            }
            key = temp;
            return;
        }
        // 오른쪽으로 90도
        void rotate90(vector<vector<int>> &key){
            int m = key.size();
            vector<vector<int>> temp(m, vector<int>(m, 0));
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    temp[i][j] = key[m - j - 1][i];
                }
            }
            key = temp;
            return;
        }

        */
    }
    return 0;
}