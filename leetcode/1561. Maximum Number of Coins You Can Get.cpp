#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int sum=0;
        for(int i=n/3;i<n;i+=2){
            sum+=piles[i];
        }      
        return sum;
    }
};

int main(){

}