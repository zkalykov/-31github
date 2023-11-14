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
#define int long long

bool isVowel(char a){if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')ret 1; else ret 0;}

int calc(int n, int m){
	int res = 0, i = 1, d, p= 0;
	while (i<=m){
		d=n/i;
		i=n/d;
		res += d*(i-p);
		p=i++;
	}
	res-=n/m*(p-m);
	return res;
}
signed main(){
	fastUI
	int t_case=1;
	cin>>t_case;
	while(t_case-->until_zero){
		int x,y;
		cin>>x>>y;
		int ans=0,b=1;
		while(b<y&&b*b-1<x){
			ans+=(b*b-1)/(b+1);
			b++;
		}
		ans+=calc(x,min(x, y + 1))-calc(x,min(x,b));
		cout<<ans<<"\n";
	}
	return 0;
}







