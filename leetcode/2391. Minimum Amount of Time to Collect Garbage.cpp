#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
    	int len=garbage.size();
    	int G=0,M=0,P=0;
    	
    	map<char,int>seen;
    	for(int i=1;i<travel.size();i++){
    		travel[i]+=travel[i-1];
    	}
        for(int i=0;i<len;i++){
        	string s=garbage[i];
        	int len_s=s.size();

        	for(int j=0;j<len_s;j++){
        		if(s[j]=='M'){
        			M++;
        			seen[s[j]]=i;
        		}
        		if(s[j]=='P'){
        			P++;
        			seen[s[j]]=i;
        		}
        		if(s[j]=='G'){
        			G++;
        			seen[s[j]]=i;
        		}
        	}
        }
        for(int i=1;i<len;i++){
        	if(seen['M']==i){
        		M+=travel[i-1];
        	}
        	if(seen['G']==i){
				G+=travel[i-1];
        	}
        	if(seen['P']==i){
        		P+=travel[i-1];
        	}
        }
        return G+P+M;
    }
};

int main(){
	vector<string>garbage={"G","P","GP","GG"};
	vector<int>travel={2,4,3};
	Solution obj;
	cout<<obj.garbageCollection(garbage,travel);

}