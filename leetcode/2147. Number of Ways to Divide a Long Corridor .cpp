#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfWays(string corridor) {
        int x = 1;  
        int y = 0;  
        int z = 0; 
        for (auto i: corridor)
            if (i == 'S')
                x = (x + z) % int(1e9 + 7), z = y, y = x, x = 0;
            else
                x = (x + z) % int(1e9 + 7);
        return z;
    }
};

int main(){
    
}