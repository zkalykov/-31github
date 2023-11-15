/*DFS to undirect
 * 
 * 
 * 
 */

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
#define scan1(a)     scanf("%lld",&a);
#define scan2(a,b)   scanf("%lld %lld",&a,&b);
#define scan3(a,b,c) scanf("%lld %lld %lld", &a,&b,&c);
#define pii pair<int,int>
#define pll pair<long,long>
#define YES puts("YES");
#define NO  puts("NO");
#define PI acos(-1)
#define mod 1e9+7
const int N=1e6+7,INF=1e9+7;
vector<int>G[N];
bool visited[N];
int n,m;
int parent=0,son=0;

void dfs(int v,int p){
	if(visited[v])ret;
	visited[v]=1;
	for(int to:G[v]){
		if(to==son&&visited[to]==0){
			cout<<"YES THEY ARE FAMILY\n";
			exit(0);
			
		}
		if(to!=p){
			dfs(to,v);
		}
	}
	ret;
}

auto solve(int t_case){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		G[x].pb(y);
		G[y].pb(x);
	}
	cin>>parent>>son;
	
	dfs(parent,0);
	cout<<"Sorry they are not family\n";
	return;
}
signed main(){
	fastUI 
	int t_case=1;
	//cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve(t_case);
	else
		never_give_up;
	return 0;
}









