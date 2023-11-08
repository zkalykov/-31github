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

void solve(){
	int n,k;
	string s;
	cin>>n>>k>>s;
	if(2*k==n){
		NO
		ret;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]){
			NO
			ret;
		}
	}
	YES
}
 int a[10000];
main(){
 
    cin>>o;
	while(o--){
		cin>>n>>k;
		set<int>q;
		map<int,int>mp;
		
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]++;
			q.insert(a[i]);
		}
		auto v = q.end();
		v--;
		int mx = *v;
	//	cout<<mx<<"<__";
		int mex;
		for(int i=0; i<=n; i++){
			if(mp[i] == 0 ){
				mex = i;
				break;
			}
		}
		if(mex > mx){
			cout<<q.size()+k<<endl;
		}
		else if(mp[(mx+mex+1)/2] == 0 && k > 0){
			cout<<q.size()+1<<endl;
		}
		else{
			cout<<q.size()<<endl;
		}
		
		
		
	}    
 
}
