#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> tmp;
    for(auto a : numbers)
        tmp.push_back(to_string(a));
    
    sort(tmp.begin(), tmp.end(), cmp);
    
    if(tmp[0]=="0") 
        return "0";
    
    for(auto a:tmp)
        answer+=a;

    return answer;
}