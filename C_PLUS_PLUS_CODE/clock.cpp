#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int hour=00,minute=00,second=00,minisecond=00;
auto print(){
	system("cls");
	cout<<hour<<":"<<minute<<":"<<second<<":"<<minisecond<<"\n";
}
signed main(){
	while(1){
		print();
		minisecond++;
		if(minisecond==30){
			second++;
			minisecond=0;
		}
		if(second==60){
			minute++;
			second=0;
		}
		if(minute==60){
			minute=0;
			hour++;
		}
	}
}
