
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum=0;
        
        for(int i=1;i<points.size();i++){
            int from_x=points[i-1][0];
            int from_y=points[i-1][1];
            
            int to_x=points[i][0];
            int to_y=points[i][1];
            

            int x_differ = abs( from_x - to_x );
            int y_differ = abs( from_y - to_y );
            
            sum+= ( max(x_differ,y_differ) );            
            
        }
        return sum;
    }
};
