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
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b, a % b);
}
int binSerch(int x,int c){
	string temp="";
	int l=1,r=1e9,y=0;
	while(l<r){
		y=l+r>>1;
		temp=to_string(gcd(x,y));
		if(temp.size()==c){
			return c;
		}
		else if(temp.size()>c){
			r=y;
		}
		else {
			l=y;
		}
	}
	return y;
}
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	int x=1,LIMIT_X=9;
	int y=1,LIMIT_Y=9;
	for(int i=1;i<a;i++){
		x=x*10;
		LIMIT_X=LIMIT_X*10*(9);
	}
	for(int i=1;i<b;i++){
		y=y*10;
		LIMIT_Y=LIMIT_Y*10*(9);
	}
	for(;x<=LIMIT_X;x++){
		string LenCheck=to_string(binSerch(x,c));
		if(LenCheck.size()==b){
			cout<<x<<" "<<LenCheck<<'\n';
		}
	}
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









    
