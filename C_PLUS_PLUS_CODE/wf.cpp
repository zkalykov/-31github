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
#include<iostream>
using namespace std;
#define int long long 
main(){
	int n,q,k;
	cin>>n>>q>>k;
	int a[n],s[n];
	for(int i=1;i<=n;i++)cin>>a[i];
	a[0]=0,a[n+1]=k+1;
	for(int i=1;i<=n;i++){
		s[i]=s[i-1]+(a[i+1]-a[i-1]-2);
	}
	int l,r;
	while(q--){
		cin>>l>>r;
		if(l==r){
			cout<<k-1<<"\n";
			continue;
		}
		int ans = s[r] - s[l - 1] + a[l - 1] + k - a[r + 1] + 1;
        cout << ans << '\n';
	}
}
