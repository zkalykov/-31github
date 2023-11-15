#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > graph;
vector<int>used,path;
int flag=0,n,m;

void dfs(int v){
	if(flag==1)return;
	used[v]=1;
	path.push_back(v);
	for(int i=0;i<graph[v].size();i++){
		int to=graph[v][i];
		if(used[to]==1){
			path.push_back(to);
			flag=1;
			return;
		}
		else{
			dfs(to);
		}
		if(flag==1){
			return ;
		}
	}
	used[v]=2;
	path.pop_back();
}
void checkNODE(){
	for(int i=1;i<=n;i++){
		if(used[i]==0){
			dfs(i);
			if(flag==1)return;
		}
	}
}
signed main(){
		cin>>n>>m;
		int u,v;
		graph.resize(n+1);
		used.resize(n+1,0);
		for(int i=0;i<m;i++){
			cin>>u>>v;
			graph[u].push_back(v);
		}
		checkNODE();
		if(flag==1){
			int i=path.size()-2;
			int to=path.back();
			while(path[i]!=to){
				i--;
			}
			cout<<"YES\n";
			while(i<path.size()-1){
				cout<<path[i]<<" ";
				i++;
			}
			cout<<endl;
		}
		else{
			cout<<"NO\n";
		}
}








