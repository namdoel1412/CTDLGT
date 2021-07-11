#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
    	int k;
    	string s;
    	cin>>k>>s;
    	int d[300]={0};
    	for(int i=0;i<s.size();i++)
    		d[s[i]]++;
    		priority_queue<int ,vector<int> > q;
    		for(int i=0;i<s.size();i++){
    			if(d[s[i]]>0){
    				q.push(d[s[i]]);
    				d[s[i]]=0;
				}
			}
			while(k>0&& q.size()>0){
				k-=1;
				int t=q.top();
				q.pop();
				t--;
				q.push(t);
			}
			long long res =0;
			while(q.size()>0){
				int t=q.top();
				q.pop();
				res+=t*t;
				
			}
			cout<<res<<'\n';
	}
}
