/*
 * @author is zhohny_legend
 * IQ CODE IMPROVE
 */
#include <bits/stdc++.h>
using namespace std;
int dp[9][9];
signed main(){
	bool f=0;
	for(int i=1;i<=8;i++){
		f=!f;
		for(int j=1;j<=8;j++){
			dp[i][j]=f;
			f=!f;
		}
	}
	// a= 97
	int t;
	string a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int
		F=dp[int(a[0])-96 ][a[1]],
		S=dp[int(b[0])-96 ][b[1]];
		cout<<(F==S?"SAME\n":"DIFFERENT");
	}
}
