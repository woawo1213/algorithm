#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void printV(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<< v[i] <<" ";
    }
    cout<< "\n";
}
vector<string> split(string input, string delimiter)
{
    vector<string>ret;
    long long pos=0;
    string token="";
    while((pos=input.find(del)))
    
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
        int a[3]={1,2,3};
        vector<int> v;
        for(int i=0;i<3;i++) v.push_back(a[i]);
        do
        {
            printV(v);
        }while(next_permutation(v.begin(),v.end()));
        cout<<"---------------------------"<<endl;
        v.clear();
        for(int i = 2; i >= 0; i--)v.push_back(a[i]);
        do
        {
            printV(v);
        }while(next_permutation(v.begin(),v.end()));        

    }
    {
        /* string split */
        cout << "######################string split######################" << endl;
        cout << endl;
        

    }
    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }
    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }
    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }
    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }
    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }
    {
        /* algo */
        cout << "######################algo######################" << endl;
        cout << endl;
    }
    return 0;
}