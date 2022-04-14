//프린터
#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> tmp;
    vector<int> pri;
    for(int i=0;i<priorities.size();i++)
        pri.push_back(i);

    while (priorities.size()!=0) { 
        int max=*max_element(priorities.begin(),priorities.end());
        if(priorities[0]==max){
            tmp.push_back(pri.pop_back());
            priorities.pop_back();

        }

    }



    return answer;
}