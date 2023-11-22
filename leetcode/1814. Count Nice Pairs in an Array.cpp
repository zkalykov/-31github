#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int countNicePairs(vector<int>& nums) {
    int count = 0, len = nums.size();
    long long mod = 1e9 + 7;
    long long inverse_2 = (mod + 1) / 2; 
    unordered_map<long long, int> seen; 

    for (int i = 0; i < len; i++) {
      long long diff = (long long)nums[i] - rev(nums[i]);
      seen[diff]++;
    }

    for (auto it = seen.begin(); it != seen.end(); it++) {
      long long cur = it->second; 
      count = (count + ((cur * (cur - 1)) % mod) * inverse_2) % mod;
    }

    return count; 
  }

private:
  int rev(int x) {
    int res = 0;
    while (x) {
      res = res * 10 + x % 10;
      x /= 10;
    }
    return res;
  }
};

int main(){
    Solution obj;
    vector<int>nums={13,10,35,24,76};
    cout<<obj.countNicePairs(nums);
}