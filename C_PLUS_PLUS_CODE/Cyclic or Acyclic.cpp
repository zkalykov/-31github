#include<bits/stdc++.h>
using namespace std;
const int N=2e5;
vector<int>G[N];
bool used[N];
bool cycle=0;

void dfs(int v,int p){
	if(cycle==1)return;
	if(used[v]==1)return;
	used[v]=1;
	for(int to:G[v]){
		if(to!=p){
			if(used[to]==1){
				cycle=1;
				break;
			}
			else{
				dfs(to,v);
			}
		}
		else{
			continue;
		}
	}
}
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		G[v].push_back(u);
		G[u].push_back(v);
	}
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	
	for(int i=1;i<=n;i++){
		if(cycle==1){
			cout<<"CYCLIC\n";
			break;
		}
		if(used[i]==1){
			continue;
		}
		else{
			dfs(i,0);
		}
	}
	if(cycle==0){
		cout<<"ACYCLIC\n";
		cycle=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<G[i].size();j++){
			cout<<i<<" "<<G[i][j]<<'\n';
		}
	}
	memset(used,0,sizeof used);
	for(int i=1;i<=N;i++){
		for(int j=0;j<(int)G[i].size();j++){
			G[i][j]=0;
		}
	}
	
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	return;
}
signed main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
