#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
    	sort(nums.begin(),nums.end());
    	int i=0,n=nums.size(),mx=9999*-1;
    	while(i<n/2){
    		mx=max(mx,(nums[i]+nums[n-i-1]));
    		i++;
    	}
    	return mx;
    }
};

int main(){
	Solution obj;
	vector<int>nums={1,2,3,4,5}
	int ans=obj.minPairSum(nums);
	cout<<"ANSWER : "<<ans;
}