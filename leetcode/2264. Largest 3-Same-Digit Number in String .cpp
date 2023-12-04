class Solution {
public:
    string largestGoodInteger(string num) {

        string n="";
        bool temp=false;
        num=num+"!@#$%^&*()_+";
        vector<string>abc;

        for(int i=1;i<num.size()-1;i++ ){
            if(! temp ){
                if(num[i]==num[i-1]){
                    temp=true;
                }
            }
            else{
                if(num[i]==num[i-1]){
                    n+=num[i];
                    n+=num[i];
                    n+=num[i];
                    abc.push_back(n);
                    n="";

                }
                else{
                    temp=false;
                    n="";
                }
            }
        }
        sort(abc.begin(),abc.end());
        return (abc.size()?abc[abc.size()-1]:"");
    }
};