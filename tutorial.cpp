#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    {
        /* type */
        cout << endl;
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
        cout << endl;
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
        cout << endl;
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
        cout << endl;
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
        cout << endl;
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
        /* string */
        cout << endl;
        cout << "######################string######################" << endl;
        cout << endl;
    }

    return 0;
}