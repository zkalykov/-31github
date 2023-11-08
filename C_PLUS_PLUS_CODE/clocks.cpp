#include <bits/stdc++.h>
using namespace std;

int c=0;

double time_spent=0.0000000000000000000000000000000; 
    
signed main(){
	clock_t begin=clock();
	for(int i=0;i<10e7;i++){
		c++;
		c++;
		c++;
		c--;
		c--;
		c--;
	}
	clock_t end=clock();
	time_spent = (double)(end-begin)/CLOCKS_PER_SEC; 
	cout<<c<<" "<<time_spent<<"\n";
	
	return 0;
}









