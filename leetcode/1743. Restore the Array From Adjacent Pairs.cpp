// TIME LIMIT EXCEEDED will update next time
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        int l = adjacentPairs.size();
        vector<int>ans;
        ans.push_back(adjacentPairs[0][0]);
        ans.push_back(adjacentPairs[0][1]);
        
        int pos=1;
        vector<int>used(l+9,0);
        
        while(ans.size()!=l+1){
            if(pos==l)pos=1;
            if(used[pos]){
                pos++;
                continue;
            }
            int left = adjacentPairs[pos][0], right = adjacentPairs[pos][1];
            
            if(left==ans[0]){
                ans.insert(ans.begin(),right);
                used[pos]++;
                pos++;
                continue;
            }
            if(left==ans[ans.size()-1]){
                ans.push_back(right);
                used[pos]++;
                pos++;
                continue;
            }
            if(right==ans[0]){
                ans.insert(ans.begin(),left);
                used[pos]++;
                pos++;
                continue;
            }
            if(right==ans[ans.size()-1]){
                ans.push_back(left);
                used[pos]++;
                pos++;
                continue;
            }
            pos++;
        }
        
        return ans;
    }
};

int main() {
    vector<vector<int>> test = {
        {4, -2},
        {1, 4},
        
        {-3, 1}
    };
    Solution obj;

    vector<int> sol;
    sol = obj.restoreArray(test);
    for (auto x : sol) {
        cout << x << " ";
    }
    return 0;
}
