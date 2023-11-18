#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int max_freq = 0;
        int left = 0;
        long long total_operations = 0;

        for (int right = 0; right < n; ++right) {
            total_operations += nums[right];

            while ((long long)(right - left + 1) * nums[right] > total_operations + k) {
                total_operations -= nums[left];
                ++left;
            }

            max_freq = std::max(max_freq, right - left + 1);
        }

        return max_freq;
    }
};

int main(){
	vector<int>nums={1,2,4};
	int k=5;

	Solution obj;
	int kk=obj.maxFrequency(nums,k);
	cout<<kk;
}