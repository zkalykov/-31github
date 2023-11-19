#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        set<int>st;
        map<int,int>mp;
        vector<int>v;
        int cnt=0,sum=0;
        for(int x:nums){
        	st.insert(x);
        	if(!mp[x]){
        		cnt++;
        		mp[x]++;
        	}
        	else{
        		mp[x]++;
        	}
        }
        for(auto it=st.begin();it!=st.end();it++){
        	v.push_back(*it);
        }
        if(st.size()<=1){
        	return 0;
        }


        for(int i=v.size()-1;i>=1;i--){
        	sum+=mp[v[i]];
        	mp[v[i-1]]+=mp[v[i]];

        }

        return sum;
    }
};

int main(){
	vector<int>nums={1,1,2,2,3};

	Solution obj;
	int n=obj.reductionOperations(nums);
	cout<<n;
}