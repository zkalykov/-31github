#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>>next = {
      {4, 6},{6, 8},{7, 9},{4, 8}, {3, 9, 0},
        {}, {1, 7, 0},{2, 6}, {3, 1},{2,4}

    };
    int dp[10][50070];

    int mod=1e9+7;
    int knightDialer(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<=9;i++){
            ans=(ans+f(i,n))%mod;
        }
        return ans;
    }

    int f(int cur,int n){
        if(n==1) return 1;
        if(cur==5)return 0;
        if(dp[cur][n]!=-1)
            return dp[cur][n];
        int ans=0;
        for(auto i:next[cur]){
            ans=(ans+f(i,n-1))%mod;
        }
        dp[cur][n]=ans;
        return dp[cur][n];
    }
};
 
int main(){
	Solution obj;
	cout<<obj.knightDialer(1000);
}