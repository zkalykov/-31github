#include<bits/stdc++.h>
using namespace std;

queue<int>q;
bool visited[100];
int dist[100];
vector<int>G[100];

signed main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		G[v].push_back(u);
		G[u].push_back(v);
	}
	visited[1]=true;
	dist[1]=0;
	q.push(1);
	while(!q.empty()){
		int s=q.front();q.pop();
		for(auto to:G[s]){
			if(visited[to])continue;
			visited[to]=true;
			dist[to]=dist[s]+1;
			q.push(to);
			cout<<"from "<<s<<" - "<<to<<'\n';
		}
	}
	cout<<"enter two vertexes to find length of way \n";
	int tt;
	cin>>tt;
	while(tt--){
		int x,y;
		cin>>x>>y;
		cout<<dist[y]+dist[x]<<'\n';
	}
}
