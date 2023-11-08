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
#define int long long
const int N=5e4+7,INF=1e9+7;
int n;
 
bool check(ll x) {
	int s = 0;
	ll k = x;
	while (k) {
		s += k % 10;
		k /= 10;
	}
 
	return (__gcd(x, s) > 1);
}
auto solve(int t_case){
	cin>>n;
	for(int i=n;i<=N;i++){
		if(check(i)){
			cout<<i<<'\n';
			return ;
		}
	}
	return;
}
signed main(){
	fastUI 
	int t_case=1;
	cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve(t_case);
	else
		never_give_up;
	return 0;
}









