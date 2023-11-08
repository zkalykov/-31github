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
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int k;
	cin>>k;
	int ans=solve(k);
	if(ans==INF){
		cout<<"NIE";
	}
	else{
		cout<<ans;
		
	}
}
