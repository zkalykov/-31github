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
vector<int>G[N],path;
bool used[N];
int n;

void dfs(int v){
	if(used[v]>=1)return ;
	used[v]=1;
	for(int to:G[v]){
		if(used[to]==1){
			cout<<1;
			exit(0);
		}
		else{
			dfs(to);
		}
	}
	used[v]=2;
	return ;
}
void checkNODE(){
	for(int i=1;i<=n;i++){
		if(!used[i]){
			dfs(i);
		}
	}
	return;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin>>x;
			if(x)G[i].pb(j);
		}
	}
	checkNODE();
	cout<<0;
	return 0;
}
