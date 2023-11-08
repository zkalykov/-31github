#include<bits/stdc++.h>
using namespace std;

long long a,b,c=0,r,l,m;
vector<int>v;
int find_lower(int f)
{
	r=a;
	l=-1;
	while(r>l+1){
		int m=(r+l)/2;
		if(v[m]>f)
			r=m;
		else
			l=m;
	}
	return l;
}

int main()
{
	cin>>a>>b;
	for(long long i=0;i<a;i++) {
		cin>>c;
		v.push_back(c);
	}
	while(b--){
		cin>>c;
		cout<<v[find_lower(c)]<<'\n';
	}
}






