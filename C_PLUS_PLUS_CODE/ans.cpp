#include<bits/stdc++.h>
#define ret return
using namespace std;
#define int long long

string decimalTObinary(int n) {
	string s="";
	if(n==0)ret 0;
	else{
		for(int i=0;n>0;i++){
			s+=((n%2)+'0');
			n/=2;
		}
		return s;
	}
}

int a,b,k;

bool is(int x,int y){
	
	string A=decimalTObinary(x);
	string B=decimalTObinary(y);
	
	int c0=0,c1=0;  
	for(int i=0;i<A.size();i++)if(A[i]=='1')c1++;else c0++;
	if(c0!=a)return 0;
	if(c1!=b)return 0;
	
	c0=0,c1=0;  
	for(int i=0;i<B.size();i++)if(B[i]=='1')c1++;else c0++;
	if(c0!=a)return 0;
	if(c1!=b)return 0;
}

bool isit(int n){
	string s=decimalTObinary(n);
	int c1=0;
	for(int i=0;i<s.size();i++)if(s[i]=='1')c1++;
	if(c1==k) ret 1;
			  ret 0;
}
bool check(int x,int y){
	if(is(x,y)){
		if(isit(x-y)) return 1;
				    return 0;
	}
	return 0;
}
signed main(){
	cin>>a>>b>>k;
	for(int i=1;i<=10000;i++){
		for(int j=1;j<=i;j++){
			if(check(i,j)){
				cout<<"YES\n";
				cout<<decimalTObinary(i)<<"\n";
				cout<<decimalTObinary(j)<<"\n";
				exit(0);
			}
		}
	}
	cout<<"NO\n";
	return 0;
}









