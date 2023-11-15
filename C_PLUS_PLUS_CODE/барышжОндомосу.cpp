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
bool isVowel(char c){
	c=tolower(c);
	if(c=='a'||c=='o'||c=='u'||c=='i'||c=='y'||c=='e') 
		ret 1; 
	ret 0;
}


void solve(){
	string s;
	cin>>s;
	if(s=="MEN"){
		cout<<"MAGA";
	}
	else if(s=="SEN"){
		cout<<"SAGA";
	}
	else if(s=="AL"){
		cout<<"AGA";
	}
	else if(isVowel(s[s.size()-1])){
		char c=s[s.size()-1];
		if(c=='A'){
			cout<<s<<"GA";
		}
		else if(c=='O'){
			cout<<s<<"GO";
		}
		else if(c=='U'){
			cout<<s<<"GA";
		}
		else if(c=='I'){
			cout<<s+"GE";
		}
		else if(c=='Y'){
			cout<<s+"GA";
		}
		else if(c=='E'){
			cout<<s+"GE";
			
		}
		else {
			cout<<s<<"GA";
		}
		
		/////////////////
	}
	else{
		char c=s[s.size()-2];
		if(c=='A'){
			if(s[s.size()-1]=='N'||s[s.size()-1]=='M'){
				cout<<s<<"GA";
			}
			else if(s[s.size()-1]=='T'){
				cout<<s<<"KA";
			}
			else
			cout<<s<<s[s.size()-1]<<"A";
		}
		else if(c=='Y'){
			if(s[s.size()-1]=='M'){
				cout<<s<<"A";
			}
			else if(s[s.size()-1]=='G'){
				for(int i=0;i<(int)s.size()-1;i++){
					cout<<s[i];
				}
				cout<<"KKA";
			}
			else if(s[s.size()-1]=='Z'){
				cout<<s<<"GA";
			}
			else{
				cout<<s<<"GA";
			}
		}
		else if(c=='O'){
			if(s[s.size()-1]=='K'){
				cout<<s<<"KO";
			}
			else{
				cout<<s<<"GO";	
			}
		}
		else if(c=='U'){
			cout<<s<<"GA";
		}
		else if(c=='E'){
			if(s[s.size()-1]=='P'||s[s.size()-1]=='K'){
				cout<<s<<"KE";
			}
			else
			cout<<s<<"GE";
		}
		else if(c=='I'){
			if(s[s.size()-1]=='Z'){
				cout<<s<<"GE";
			}
			else
			if(s[s.size()-1]=='K'){
				cout<<s<<"KE";
			}
			else if(s[s.size()-1]=='M'){
				cout<<s<<"GE";
			}
			else{
				cout<<s<<"GA";
			}
		}
	}
	return;
}
signed main(){
	fastUI 
	int t_case=1;
	//cin>>t_case;
	if(I_am_first)
		while(t_case-->until_zero)solve();
	else
		never_give_up;
	return 0;
}









