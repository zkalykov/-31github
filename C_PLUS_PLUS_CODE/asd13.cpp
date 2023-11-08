#include<bits/stdc++.h>
using namespace std;

signed main(){
	int n,res=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++){
		for(int j=i;j>=0;j--){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				res++;
			}
		}
	}
	cout<<res<<'\n';
}
