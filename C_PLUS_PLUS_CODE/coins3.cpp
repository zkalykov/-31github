#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7,INF=1e9+7;
vector<int>v;

int  value[N];

int solve(int x){
	value[0]=0;
	for(int i=1;i<=x;i++){
		value[i]=INF;
		for(int j=0;j<v.size();j++){
			if(i-v[j]>=0){
				value[i]=min(value[i],value[i-v[j]]+1);
			}
		}
	}
	cout<<v[x];
}
signed main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int i;
	cin>>i;
	solve(i);
}
