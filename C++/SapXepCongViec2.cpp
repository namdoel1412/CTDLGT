#include<bits/stdc++.h>
using namespace std;
struct CV{
	int stt,fi,se;
};	
bool cmp( CV a,CV b){
	return a.se>b.se;
}

int main(){
	ios_base::sync_with_stdio(0);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		CV a[n];
		for(int i=0;i<n;i++)
			cin>>a[i].stt>>a[i].fi>>a[i].se;
		sort(a , a+n,cmp);
		int d=0,res=0;
		int F[1001]={0};
		for(int i=0;i<n;i++){
			while(F[a[i].fi]&& a[i].fi>0) a[i].fi -=1;
			if(!F[a[i].fi]&& a[i].fi>0){
				F[a[i].fi]=1;
				res+= a[i].se;
				d++;
			}
		}
		cout<<d<<' '<<res;
		cout<<'\n';
	}
	
}
