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

vector<int>used,path,graph[N];
int flag=0,n,m;

void dfs(int v){
	if(flag==1)return;
	used[v]=1;
	path.push_back(v);
	for(int i=0;i<(int)graph[v].size();i++){
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
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int x;
				cin>>x;
				if(x==1)graph[i].push_back(j);
			}
		}
		checkNODE();
		if(flag==1){
			cout<<1;
		}
		else{
			cout<<"0\n";
		}
}








