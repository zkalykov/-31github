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
#define mod  8388608
#define LMA LLONG_MAX
#define LMI LLONG_MIN
#define int long long 

bool isVowel(char a){if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')ret 1; else ret 0;}

int n, m, a[100000];
map<int, int> mm;
int sum;

void Try(int i, int s, int cnt) {
    if(i>m){
        if(!mm.count(s))
			mm[s] = cnt;
        else
			mm[s] = min(mm[s], cnt);
        return;
    }
    Try(i + 1, s + a[i], cnt + 1);
    Try(i + 1, s, cnt);
}
int work() {
    if (sum * 2 < n) return -1;
    Try(1, 0, 0);
    int ans = m * 2 + 1;
    for (map<int, int>::iterator it = mm.begin(); it != mm.end(); ++it) {
        if (mm.count(n - it->first)) ans = min(ans, it->second + mm[n - it->first]);
    }
    if (ans == m * 2 + 1) return 0;
    return ans;
}
void solve(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<work();
}
signed main(){
	fastUI
	int t_case=1;
//	cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve();
	else
		never_give_up;
	return 0;
}







