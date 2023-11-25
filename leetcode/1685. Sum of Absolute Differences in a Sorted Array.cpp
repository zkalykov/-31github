#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int len=nums.size(),sum=0;
        vector<int>pre(len+2,0),res;
        for(int i=1;i<len+1;i++){
			pre[i]=pre[i-1]+nums[i-1];
			//sum+=nums[i-1];
			//cout<<i<<" "<<pre[i]<<endl;
		}
		//cout<<endl;
		for(int i=1;i<len+1;i++){
		    
			int left=abs(pre[i]-nums[i-1]*(i));
			int right=(pre[len]-pre[i]) - nums[i-1]*(len-i);
			//cout<<i<<" "<<(pre[len]-pre[i])<<endl;
			//cout<<"nums[i-1]*(len-i) "<<nums[i-1]*(len-i)<<endl;
			res.push_back(right+left);
			//cout<<"left "<<left<<endl;
		}
		return res;
    }
};

int main(){
	vector<int>nums={
	1,4,6,8,10	
	};
	Solution obj;
	vector<int>n=obj.getSumAbsoluteDifferences(nums);
	for(auto x:n)
	cout<<x<<" ";
}
