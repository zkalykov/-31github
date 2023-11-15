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
const int N=2e4+7,INF=1e9+7;

vector<int>adj[N],path[N];
bool visited[N];
int x,y,cnt=0;

void nextPATH(){
	cnt++;
}

void dfs(int v,int p){
	if(visited[v])return;
	visited[v]=1;
	path[cnt].pb(v);
	for(auto u:adj[v]){
		if(u==y){
			path[cnt].pb(u);
			nextPATH();
		}
		else{
			dfs(u,v);
		}
	}
	path[cnt].pop_back();
}
void print(){
	int mn=INF,pos=0;
	
	for(int i=0;i<cnt;i++){
		if(mn>path[i].size()){
			mn=path[i].size();
			pos=i;
		}
	}
	for(int i=0;i<path[pos].size();i++){
		cout<<path[pos][i]<<" ";
	}
}
signed main(){
	int n,m;
	cout<<"Enter here vertexes and edges\n";
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
	}
	cout<<"Enter here two vertex to find way from a to b\n";
	cin>>x>>y;
	
	dfs(x,0);
	print();
	cout<<"Sorry , I can't find the way from "<<x<<" to "<<y<<"\n";
	return 0;
}



