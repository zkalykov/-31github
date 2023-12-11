class Solution {
public:

    int findSpecialInteger(vector<int>& arr) {
        map<int,int>cnt;
        for(int i=0;i<arr.size();i++){
            cnt[arr[i]]++;
            if(cnt[arr[i]] > arr.size()/4){
                return arr[i];
            }
        }        
        return 0;
    }
};