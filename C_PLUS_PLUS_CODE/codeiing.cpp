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

int to_int(string s){
	int n=0;
	for(auto x:s){
		n=n*10+(int(x)-'0');
	}
	return n;
}
auto solve(int t_case){
	string s,temp="";
	int a,b;
	char O;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			temp+=s[i];
		}
		else{
			O=s[i];
			a=to_int(temp);
			break;
		}
	}
	temp="";
	for(int i=s.length()-1;i>=0;i--){
		if(isdigit(s[i])){
			temp+=s[i];
		}
		else{
			reverse(all(temp));
			b=to_int(temp);
			break;
		}
	}
	//cout<<a<<" "<<O<<" "<<b;
	if(O=='+'){
		cout<<a+b;
	}
	else if(O=='-'){
		cout<<a-b;
	}
	else if(O=='*'){
		cout<<a*b;
	}
	else if(O=='/'){
		cout<<fixed<<setprecision(20)<<a/b;
	}
	else if(O=='%'){
		cout<<a%b;
	}
	
	return;
}
signed main(){
	fastUI
	int t_case=1;
	//cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve(t_case);
	else
		never_give_up;
	return 0;
}









