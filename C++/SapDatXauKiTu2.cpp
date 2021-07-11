#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int d[300]={0};
		int Max=0;
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
			if(Max<d[s[i]]) Max = d[s[i]];
		}
		if((Max-1)*(k-1)>s.size()-Max) cout<<-1;
		else cout<<1;
		cout<<endl;
	}
	return 0;
}
