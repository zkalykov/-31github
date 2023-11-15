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
int a[N], n, m, k;
int sum[N][2];

void solve(){
	cin>>n;
	string s,t;
	cin>>s>>t;
	bool flag=0;
	for(int i=0;i<n;i++){
		sum[i][0] = (s[i] == '0');
		sum[i][1] = (s[i] == '1');
		if(i){
			sum[i][0] += sum[i-1][0];
			sum[i][1] += sum[i-1][1];
		}
	}
	for(int i=n-1;i>=0;i--){
		int cur=flag;
		cur^=s[i]-'0';
		if(t[i]-'0'==cur){
			continue;
		}
		else{
			if(sum[i][0] != sum[i][1]){
				cout << "NO\n";
				return;
			}
			flag^=1;
		}
	}
	cout<<"YES\n";
	return;
}
signed main(){
	fastUI 
	int t_case=1;
	cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve();
	else
		never_give_up;
	return 0;
}









