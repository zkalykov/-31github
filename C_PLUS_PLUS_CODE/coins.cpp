/**
	"ALLAH VELIK" !!!
	Zhyrgalbek Kenzhebaev "I am first !!!"
		@author zhohny_legend

	¦¦¦+   ¦¦¦+   ¦¦+   ¦¦¦¦¦¦¦¦+
	¦¦¦¦+ ¦¦¦¦¦   ¦¦¦   +--¦¦+--+
	¦¦+¦¦¦¦+¦¦¦---¦¦¦------¦¦¦---
	¦¦¦+¦¦++¦¦¦   ¦¦¦      ¦¦¦
	¦¦¦ +-+ ¦¦¦   ¦¦¦      ¦¦¦
	+-+     +-+   +-+      +-+

/** zhohny.me **/

#include<bits/stdc++.h>
using namespace std;

#define I_am_first 1
#define never_give_up puts("I never give up !!! ")
#define until_zero 0
#define fastUI ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define pb(a) push_back(a);
#define pf(a) push_front(a);

#define ret return

#define ff first
#define ss second

#define all(s) s.begin(),s.end()

#define scan1(a) scanf("%lld",&a);
#define scan2(a,b) scanf("%lld %lld",&a,&b);
#define scan3(a,b,c) scanf("%lld %lld %lld", &a,&b,&c);

#define pii pair<int,int>
#define pll pair<long,long>

#define YES puts("YES");
#define NO  puts("NO");

#define ll long long
#define mod 12345
#define LMA LLONG_MAX
#define LMI LLONG_MIN
const int INF=1e9+7;
bool isVowel(char a){if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')ret 1; else ret 0;}

vector<int>v;
int n;

int solve(int x){
	if(x<0 )ret INF;
	if(x==0)ret 0;
	int best=INF;
	for(int i=0;i<v.size();i++){
		best=min(best,solve(x-v[i])+1);
	}
	return best;
}
signed main(){
	fastUI
	cin>>n; 
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.pb(x);
	}
	int x;
	cin>>x;
	cout<<solve(x);
	return 0;
}







