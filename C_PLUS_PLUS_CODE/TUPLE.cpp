#inlude<bits/stdc++.h>
using namespace std;

signed main(){
	vector<tuple<int,int,int> > v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		v.push_back(x,y,z);
	}
	for(int i=0;i<n;i++){
		cout<<v[i][1]<<" ";
	}
}
