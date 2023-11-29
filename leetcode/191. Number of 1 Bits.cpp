#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        string s = bitset<32>(n).to_string();
        int cnt=0;
        for(auto x:s)if(x=='1')cnt++;
        return cnt;
    }
};

int main(){
    
}