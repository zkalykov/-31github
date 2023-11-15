#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int X;

signed main(){
	cin>>X;	
	int second =X%60;
	int minute =X/60;
	int hour   =minute/60;
	            minute%=60;
	int day    =hour/24;
	      hour%=24;
	
	cout<<day<<":"<<hour<<":"<<minute<<":"<<second<<'\n';

}
