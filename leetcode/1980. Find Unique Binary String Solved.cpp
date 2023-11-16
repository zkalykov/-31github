#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        int k=nums[0].size();

        vector<int>pos(k,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                char s=nums[i][j];
                if(s=='1'){
                    pos[j]++;
                }
            }
        }
        
        //cout<<endl; 

        string res="",res2="";
        int temp=0;
        


        for(auto x:pos){
            if(n%2==0){
                if(x==n/2){
                    res2+='2';
                    if(temp==1){
                        res+='0';
                        temp=0;
                    }
                    else{
                        res+='1';
                        temp=1;
                    }
                }
                else if(x>n/2){
                    res+="0";
                    res2+='0';
                }
                else{
                    res+='1';
                    res2+='1';
                }
            }
            else{

                if(x>n/2){
                    res+='0';
                    res2+='0';
                }
                else{
                    res+='1';
                    res2+='1';
                }
            }
        }
        ////
        string temp_res_1="";
        string temp_res_0="";
        string ones="";
        string zeros="";
        for(int i=0;i<res2.size();i++){
            ones+='1';
            zeros+='0';
            if(res2[i]=='2'){
                temp_res_0+='0';
                temp_res_1+='1';
            }
            else{
                temp_res_1+=res2[i];
                temp_res_0+=res2[i];
            }
        }
        
        //cout<<"res: "<<res<<" => res2 "<<res2<<" temp_res_0=>"<<temp_res_0<<" temp_res_1=>" <<temp_res_1<<endl;

        if(auto it = find(nums.begin(), nums.end(), res ); it == nums.end() ){
            return res;
        }
        else if(auto it = find(nums.begin(), nums.end(), temp_res_0 ); it == nums.end()){
            return temp_res_0;
        }
        else if(auto it = find(nums.begin(), nums.end(), ones ); it == nums.end()){
            return ones;
        }
        else if(auto it = find(nums.begin(), nums.end(), zeros ); it == nums.end()){
            return zeros;
        }
        else {
            return temp_res_1;
        }
    }
};

int main(){
    Solution obj;
    vector<string>vv={"11111","01001","00010","10100","11101"};
    // 1 (1,0) 0 
    //(1/0)()
    string s=obj.findDifferentBinaryString(vv);
    cout<<s;

}