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

bool isVowel(char a){if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')ret 1; else ret 0;}

int S(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	ret s; 
}
int M(int n){
	int p=1;
	while(n>0){
		p*=n%10;
		n/=10;
	}
	if(p==1)ret 0;
	ret p;
}
void solve(){
	int n;
	cin>>n;
	int s=1,e=0;
	int k=n;
	while(k-->0){
		s*=10;
		e=e*10+9;
	}
	s/=10;
	if(n==1){
		s=0,e=9;
	}
	int ans=1,f=0,m=0;
	for(int i=s;i<=e;i++){
		
		if(M(i)==S(i)){
//			cout<<i<<"\n";
			ans++;
			if(f==0){
				m=i;
				f=1;
			}
		}
	}
	cout<<ans<<" "<<m;
}
void WinMain(){
	int n,k,s=1,e=0;
	cin>>n>>k;
	while(n-->0){
		s*=10;
		e=e*10+9;
	}
	s/=10;
	
	int res=0;
	for(int i=s;i<=e;i++){
		int sum=0,x=i;
		while(x>0){
			sum+=x%10;
			x/=10;
		}
		if(sum==k){
			res++;
			cout<<i<<"\n";
		}
	}
	cout<<res<<endl;
}





