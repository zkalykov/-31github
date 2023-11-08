#include<bits/stdc++.h>
using namespace std;

signed main(){
	auto x=5;
	cin>>x;
	vector<int>v(x);
	for(int &y:v)cin>>y;
	
	for(auto y:v){
		cout<<y<<" ";
	}
}
