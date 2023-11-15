
#include<bits/stdc++.h>
using namespace std;

#define I_am_first 1
#define never_give_up puts("I never give up !!! ")
#define until_zero 0
#define ll long long
#define fastUI ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define pb(a) push_back(a);
#define pf(a) push_front(a);

#define ret return

#define ff first
#define ss second

#define all(s) s.begin(),s.end()

#define pii pair<int,int>
#define pll pair<long,long>

#define YES puts("YES");
#define NO  puts("NO");

#define mod 1e9+7
const int N=2e5;

vector<int>adj[N],path;
bool visited[N];

void print(){
	int element=path[path.size()-1];
	bool flag=0;
	cout<<element<<" ";
	for(int i=0;i<path.size()-1;i++){
		if(flag==0){
			if(element==path[i]){
				flag=1;
				continue;
			}
		}
		else{
			cout<<path[i]<<" ";
		}
	}
}
void dfs(int v,int p){
	if(visited[v])ret;
	visited[v]=1;
	path.pb(v);
	for(auto u:adj[v]){
		if(visited[u]==1&&p!=u){
			cout<<"It has a cycle\n";
			path.pb(u);
			print();
			exit(0);
		}
		else if(!visited[u]){
			dfs(u,v);
		}
	}
	path.pop_back();
	return;
}
signed main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dfs(1,0);
	cout<<"NDN";
	return 0;
}



