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
int x,y;

void printpath(){
	for(auto L:path){
		cout<<L<<" ";
	}
	exit(0);
}
void dfs(int v,int p){
	if(visited[v])return;
	visited[v]=1;
	path.pb(v);
	for(auto u:adj[v]){
		if(u==y){
			path.pb(u);
			printpath();
		}
		dfs(u,v);
	}
	path.pop_back();
}
signed main(){
	int n,m;
	cout<<"Enter here vertexes and edges\n";
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	cout<<"Enter here two vertex to find way from a to b\n";
	cin>>x>>y;
	
	dfs(x,0);
	cout<<"Sorry , I can't find the way from "<<x<<" to "<<y<<"\n";
	return 0;
}


