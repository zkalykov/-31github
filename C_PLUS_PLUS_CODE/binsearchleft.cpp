#include<bits/stdc++.h>
using namespace std;
#define int long long
int x,y,c;
vector<int>v;

int F(int f){
	int
	r=x,
	l=-1;
	while(r>l+1){
		int m=(r+l)/2;
		if(v[m]>f)
			r=m;
		else
			l=m;
	}
	return l;
}
signed main(){
	cin>>x>>y;
	v.resize(x);
	for(auto &in:v)	cin>>in;
	while(y--){
		cin>>c;
		cout<<v[F(c)]<<'\n';
	}
}
