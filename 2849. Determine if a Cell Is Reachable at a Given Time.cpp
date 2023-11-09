#include <iostream>
#include <cstdlib>
using namespace std;

class Solution {
    public:
    
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int xx = abs(fx - sx);
        int yy = abs(fy - sy);
        int cnt = 0;
        if (xx < yy)
            cnt = xx + (yy - xx);
        else
            cnt = yy + (xx - yy);
        if (sx == fx && sy == fy)
            return t != 1;
        return t >= cnt;
    }
};

int main() {
    Solution solution;
    int sx=1,sy=1,fx=3,fy=3,t=4;
    
    cout<<(solution.isReachableAtTime(sx, sy, fx, fy, t)?"YES":"NO")

    return 0;
}
