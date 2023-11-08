/*
 * BUG is this-> "print YES in case brakets are equal to "[(])"     " 
 */



#include<bits/stdc++.h>
using namespace std;
#define I_am_first 1
#define never_give_up puts("I never give up !!! ")
#define until_zero 0
#define ll long long
#define fastUI ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb(a) push_back(a);
#define pf(a) push_front(a);
#define ret return
#define ff first
#define ss second
#define all(s) s.begin(),s.end()
#define scan1(a)     scanf("%lld",&a);
#define scan2(a,b)   scanf("%lld %lld",&a,&b);
#define scan3(a,b,c) scanf("%lld %lld %lld", &a,&b,&c);
#define pii pair<int,int>
#define pll pair<long,long>
#define YES puts("YES");
#define NO  puts("NO");
#define PI acos(-1)
#define mod 1e9+7
const int N=1e6+7,INF=1e9+7;

auto checkSIMPLE_BRATKETS(string s){
    int cnt=0;
    for(char x:s){
        if(x=='(')cnt++;
        else cnt--;
        if(cnt<0)return false;
    }
    return true;
}
auto checkCOMPLEX_BRAKET(string s){
    vector<int>v1,v2;
    for(int i=0;i<s.size();i++){
        char x=s[i];
        
        if(x=='[')v1.pb(i);
        if(x==']'){
            if(v1.size()==0){
                ret false;
                cout<<"failed in if case\n";
            }
            v1.pop_back();
        }
        
        /////////////////////////////
        if(x=='(')v2.pb(i);
        if(x==')'){
            if(v2.size()==0){
                ret false;
                cout<<"failed in if case\n";
            }
            v2.pop_back();
        }
    }
    if(v1.size()>0||v2-.size()>0){
        return false;
    }
    return true;
}
auto solve(int t_case){
    string s;
    cin>>s;
    if(checkCOMPLEX_BRAKET(s))cout<<"YES";
    else cout<<"NO";
    cout<<"you know I am zhohny";	
    return;
}
signed main(){
    fastUI 
    int t_case=1;
    //cin>>t_case;    
    
    if(I_am_first)
        while(t_case-->until_zero)solve(t_case);
    else
        never_give_up;
    return 0;
}
for(int i=0;i<b;i++){
    
}
{
    }





