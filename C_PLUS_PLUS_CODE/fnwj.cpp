#include<bits/stdc++.h>
using namespace std;
int a,b;
int F(int x){
	int ans=x-b,t=a;
	while(t>0){
		t/=x;
		ans++;
	}
	return ans;
}
signed main(){
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int ans=F(b+1);
		for(int i=max(2,b);i<=b+300;i++){
			ans=min(ans,F(i));	
		}
		cout<<ans<<"\n";
	}
}







