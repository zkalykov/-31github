#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOneBitOperations(int n) {
        int b=sizeof(n)*8;
        int sum=0;
        int temp=1;
        
        for(int i=b-1;i>=0;i--){
        	int bit=(n>>i)&1;
        	//cout<<i<<" th is "<<bit<<endl;
        	if(!bit)continue;
        	
        	if(temp){
        	    sum+=(pow(2,i+1)-1);
        	    temp=0;
        	}
        	else if(!temp){
        	    sum-=(pow(2,i+1)-1);
        	    temp=1;
            }
        }
        return sum;
    }
};

int main(){

	Solution obj;
	cout<<obj.minimumOneBitOperations(7);

}