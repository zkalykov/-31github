#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7,INF=1e9+7;
vector<int>v;
bool used[N];
int  value[N];

int solve(int x){
	if(x<0)return INF;if(x==0)return 0;if(used[x])return value[x];
	
	int ans=INF;
	for(int i=0;i<v.size();i++){
		ans=min(ans,solve(x-v[i])+1);
	}
	used[x]=1;
	value[x]=ans;
	return ans;
}
signed main(){
	int n,m,a,b;
	int k;
	cin>>n>>m>>a>>b;
	v.push_back(a);
	v.push_back	(b);
	k=n-m;
	
	int ans=solve(k);
	if(ans==INF){
		cout<<"-1";
	}
	else{
		cout<<ans;
		
	}
}
