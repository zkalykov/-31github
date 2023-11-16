#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size() + 1;
        unordered_map<int, vector<int>> adjList;
        
        for (const auto& pair : adjacentPairs) {
            adjList[pair[0]].push_back(pair[1]);
            adjList[pair[1]].push_back(pair[0]);
        }
        
        int start = 0;
        for (const auto& entry : adjList) {
            if (entry.second.size() == 1) {
                start = entry.first;
                break;
            }
        }
        
        vector<int> result;
        map<int, int> seen;
        dfs(adjList, start, seen, result);
        
        return result;
    }
    
private:
    void dfs(const unordered_map<int, vector<int>>& adjList, int current, map<int, int>& seen, vector<int>& result) {
        result.push_back(current);
        seen[current] = 1;
        
        for (auto neighbor : adjList.at(current) ) {
            if (!seen[neighbor]) {
                dfs(adjList, neighbor, seen, result);
            }
        }
    }
};

int main() {
    vector<vector<int>> test = {
        {4,-2},
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
