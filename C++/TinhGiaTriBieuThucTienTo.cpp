#include<bits/stdc++.h>
using namespace std;
string preToPost(string s){
	stack<string > stk;
	int len = s.size();
	for(int i= len -1; i>=0;i--){
		if(s[i]== '+'||s[i]== '-'||s[i]== '*'||s[i]== '/'|| s[i]== '%'||s[i]== '^'){
			string a =stk.top(); stk.pop();
			string b= stk.top(); stk.pop();
			string tmp =a+b+s[i];
			stk.push(tmp);
		}
		else stk.push(string(1,s[i]));
	}
	return stk.top();
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		s =preToPost(s);
		stack<long long > stk;
		int len =s.size();
		for(int i=0;i<len;i++){
			if(s[i]== '+'||s[i]== '-'||s[i]== '*'||s[i]== '/'|| s[i]== '%'||s[i]== '^'){
				long long a =stk.top(); stk.pop();
				long long b =stk.top(); stk.pop();
				long long tmp;
				if(s[i]=='+') tmp =b+a;
				else if(s[i]=='+') tmp =b+a;
				else if(s[i]=='-') tmp =b-a;
				else if(s[i]=='*') tmp =b*a;
				else if(s[i]=='/') tmp =b/a;
				else if(s[i]=='%') tmp =b%a;
				else if(s[i]=='^'){
					tmp =b;
					for(int i=0;i<a-1;i++) 
						tmp*=b;
						
				}
				stk.push(tmp);
			}
			else stk.push((long long)(s[i]- '0'));
		}
		cout<<stk.top()<<'\n';
	}
}
