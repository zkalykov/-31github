/*
 * @author zhohny_legend
 * @ GEANY CLUB 
 * # write simple code
*/
#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10000;
vector<int>G(N),path;
bool used[N];

void dfs(int v){
	if(used[v])return;
	used[v]=1;
	for(auto x:G[v]){
		if(used[x]){
			check();
		}
		else{
			
		}
	}
}
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin>>x;
			if(x)G[i].pb(j);
		}
	}
	dfs(1);
	
}
signed main(){
	int SHORT_CODE=1;
	while(SHORT_CODE--)solve();
}
