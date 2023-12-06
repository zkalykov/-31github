class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>cnt;
        for(auto x:chars){
            cnt[x]++;
        }
        int ans=0;
        for(auto x:words){

            map<char,int>cur=cnt;
            bool temp=true;

            for(int i=0;i<x.size();i++){
                if(cur[x[i]]){
                    cur[x[i]]--;
                }
                else{
                    temp=false;
                }
            }
            if(temp){
                ans+=x.size();
            }

        }
        return ans;
    }
};