#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve	(int n){
	int a=pow(1+sqrt(5),n)-pow(1-sqrt(5),n);
	int b=pow(2,n)*sqrt(5);
	return a/b;
}
signed main(){
	vector<int>v;
	for(int i=1;i<=60;i++){
		cout<<(solve(i))<<" ";
	}
	
}
