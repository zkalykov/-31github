// @ MIT student : zhohny_legend
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

int h, m;
bool is(int H, int M){
	swap(H,M);
	string t = to_string(H);
	reverse(all(t));
	while(t.size() < 2)t.pb('0');
	for(auto x : t)if(x != '5' && x != '2'&& x != '1' && x != '0' && x != '8')return false;
	H=0;
	for(auto x : t){
		H *= 10;
		if(x == '2')H += 5;
		else if(x == '5')H += 2;
		else  H += x-'0';
	}
	t = to_string(M);
	reverse(all(t));
	while(t.size() < 2)t.pb('0');
	for(auto x : t)if(x != '5' && x != '2'&& x != '1' && x != '0' && x != '8')return false;
	M=0;
	for(auto x : t){
		M *= 10;
		if(x == '2')M += 5;
		else if(x == '5')M += 2;
		else  M += x-'0';
	}
	if(H >= h || M >= m)return false;
	return true;
}

void solve(){
	int i, j;
	cin >> h >> m;
	string s;
	cin >> s;
	int H=0, M=0;
	i=0;
	while(s[i] != ':'){H *= 10;H += s[i]-'0';i++;}i++;
	while(i < (int)s.size()){M *= 10;M += s[i]-'0';i++;}
	while(1){
		if(is(H,M)){
			cout << H/10 << H%10 << ':' << M/10 << M%10 << '\n';
			break;
		}
		M++;H += M/m;M %= m;H %= h;
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


