class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        map<int,int>row,col;

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                
                col[j]+=mat[i][j];
                row[i]+=mat[i][j]; 
            }
        }
        int cnt=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]){
                    if(row[i]==1 && col[j]==1){
                        cnt++;
                    }
                }
            }
        }

        return cnt;

    }
};