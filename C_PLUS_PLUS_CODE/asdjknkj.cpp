#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500001]
bool is(string s){
	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='4'&&s[i+1]=='7']){
			return 1;
		}
	}
	return 0;
}
main(){
	int cnt=0;
	for(int i=7;i<=500001;i++){
		string temp=to_string(i);
		if(is(temp)){
			a[i]=cnt;
		}
	}
}
