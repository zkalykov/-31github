// Hello teacher Kylych I wrote it it mini code 
#include<iostream>
main(){
	int t,n;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		std::cout<<(n*(n+1)/2*2*(n-1))%8388608<<"\n";
	}
}
