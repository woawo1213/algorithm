// 다음에 올 숫자
#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    if((common[1]-common[0])==(common[2]-common[1])){
        answer=common.back()+(common[1]-common[0]);
    }else {
        answer=common.back()*(common[1]/common[0]);
    }
    return answer;
}