class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>order;
        int len=nums.size();
        queue<pair<int,int>>q;

        q.push({0,0});

        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();

            order.push_back(nums[i][j]); 
            if(!j && i + 1 < len) q.push( {i + 1, 0} );
            if(j + 1 < nums[i].size()) q.push( {i, j + 1} );
        }


        return order;
    }
};