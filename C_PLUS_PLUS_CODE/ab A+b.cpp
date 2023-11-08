#include<bits/stdc++.h>
using namespace std;

signed main(){
	int n;
	cin>>n;
	vector<int>v(n);
	double S=0.00;
	int ans=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		S+=x;
	}
	
	if(S/n>=4.50){
		cout<<"Prepare to JTS";
		return 0;
	}
	while(1){
		if(S/n>=4.50){
			cout<<ans<<'\n';
			exit(0);
		}
		S+=5; ans++,n++;
	}
}
