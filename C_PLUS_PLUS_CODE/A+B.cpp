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

#define mod 1e9+7

long long to_int(string s){
	long long n=0,i=0;
	if(s[0]=='-'){
		i=1;
	}
	for(;i<s.size();i++){
		n=n*10+(int(s[i])-48);
	}
	if(s[0]=='-')n*=-1;
	return n;
}
signed main(){
	string s,m="";
	long long sum=0;
	getline(cin,s);
	for(long long i=0;i<s.size();i++){
		if(s[i]!=' '){
			m+=s[i];
		}
		else{
			sum+=to_int(m);
			m="";
		}
	}
	sum+=to_int(m);
	cout<<sum<<'\n';
}


