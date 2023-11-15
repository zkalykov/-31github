#include<bits/stdc++.h>
using namespace std;

signed main(){
	int s=0;
	int x=1;
	while(x!=0){
		cin>>x;
		if(!x){
			cout<<s;
			break;
		}
		s+=x;
	}
}
