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

#define PI acos(-1)
#define mod 1e9+7

bool isVowel(char a){a=tolower(a);if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')ret 1; else ret 0;}
double dist(int x1,int y1,int x2,int y2){return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));}

const int N=1e4,INF=1e9+7;

void solve(){
	int r,b,d;
	cin>>r>>b>>d;
	cout<<max(r,b)-min(r,b)<<'\n';
	if(r==0||b==0){cout<<"no\n";return;}
	if(r==1&&b==1&&d==0){cout<<"yes\n";return;}
	if(r==1&&b==1&&d!=0){cout<<"no\n";return;}
	if(r==2){
		if(b>=2){
			if(b-1<=d){
				cout<<"YES\n";
				return;
			}
			else{
				cout<<"NO\n";
				return;
			}
		}
		if(r-b<=d){
			cout<<"YES\n";
			return;
		}
		else{
			cout<<"NO\n";
			return;
		}
	}
	if(b==2){
		if(r>=2){
			if(r-1<=d){
				cout<<"YES\n";
				return;
			}
			else{
				cout<<"NO\n";
				return;
			}
		}
		if(b-r<=d){
			cout<<"YES\n";
			return;
		}
		else{
			cout<<"NO\n";
			return;
		}
	}
	return;
}
signed main(){
	
	int t_case=1;
	cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve();
	else
		never_give_up;
	return 0;
}









