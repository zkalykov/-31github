class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        map<int,int>row,col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i]+=grid[i][j];
                col[j]+=grid[i][j];
            }
        }
        /////
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=(  row[i] + col[j] - (n-row[i]) - (m-col[j]) );
            }
        }
        return grid;
    }
};