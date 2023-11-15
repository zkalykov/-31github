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
const int N=1e3;

vector<int>adj[N];
bool visited[N];

void dfs(int v){
	if(visited[v]==1)return;
	   visited[v]=1;
	for(auto u:adj[v]){
		dfs(u);
	}
}
int a[N][N];
signed main(){
	int n,s;
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin>>x;
			if(x){
				a[i][j]++;
				a[j][i]++;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[s][i])ans++;
	}
	cout<<ans+1	<<'\n';
	return 0;
}


