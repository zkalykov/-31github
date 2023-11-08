/*
	"ALLAH VELIK" !!!
	Zhyrgalbek Kenzhebaev "I am first !!!"
	@author zhohny_legend

	¦¦¦+   ¦¦¦+   ¦¦+   ¦¦¦¦¦¦¦¦+
	¦¦¦¦+ ¦¦¦¦¦   ¦¦¦   +--¦¦+--+
	¦¦+¦¦¦¦+¦¦¦---¦¦¦------¦¦¦---
	¦¦¦+¦¦++¦¦¦   ¦¦¦      ¦¦¦
	¦¦¦ +-+ ¦¦¦   ¦¦¦      ¦¦¦
	+-+     +-+   +-+      +-+

*/

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

bool isVowel(char a){a=tolower(a);if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')ret 1; else ret 0;}

void solve(){
	int a,b,c,p,time=0;
	cin>>p>>a>>b>>c;
	if(a>p){
		a=abs(p-a);
	}	
	else{
		if(p%a==0)
			a=p%a;
		else
			a=a-p%a;
	}
	time=a;
	if(b>p){
		b=b-p;
	}
	else{
		if(p%b==0)
			b=p%b;
		else
		b=b-p%b;
	}
	time=min(time,b);
	if(c>p){
		c=c-p;
	} 
	else{
		if(p%c==0)
		c=p%c;	
		else c=c-p%c;
	}
	cout<<min(time,c)<<"\n";
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









