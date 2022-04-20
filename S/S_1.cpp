//8단 변속기
#include<bits/stdc++.h>
using namespace std;
int n;
string gear;
int main(int argc, char** argv)
{
	for(int i=0;i<8;i++)
	{
		cin>>n;
		gear+=to_string(n);
	}


	if(gear=="12345678"){
		cout<<"ascending ";
	}
	else if(gear=="87654321"){
		cout<<"descending ";
	}else{
		cout<<"mixed";
	}


	return 0;
}