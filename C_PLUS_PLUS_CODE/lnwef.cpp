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

ll x, y;

ll calc(ll n, ll limit){
	ll res = 0, i = 1, div, pre = 0;
	while (i <= limit)
	{
		div = n / i;
		i = n / div;
		res += div * (i - pre);
		pre = i++;
	}
	res -= n / limit * (pre - limit);
	return res;
}

signed main() {
    int t; 
	cin >> t; 
	while (t-- > 0) {
        cin >> x >> y;
        ll ans = 0, b = 1;
		while (b <= y && b * b - 1 < x) {
			ans += (b * b - 1) / (b + 1);
			++b;
		}
		ans += calc(x, min(x, y + 1)) - calc(x, min(x, b));
        cout << ans << '\n';
    }
}
