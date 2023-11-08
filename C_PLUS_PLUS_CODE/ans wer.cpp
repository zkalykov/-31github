#include <iostream>
#include <algorithm>

using namespace std;

int n,dp[1000001];

void F(int n){
	dp[1] = 0;
	for (int i = 2; i <= n; i++){
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
	}
	return;
}

int main(){
	F(10000000);
	int n=1;
	while(1){
		cin>>n;
		cout<<F[n]<<endl;
	}
	return 0;
}
