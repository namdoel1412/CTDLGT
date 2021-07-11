#include<bits/stdc++.h>
using namespace std;
long long F[55];
void tinh(){
	int i;
	F[1]=1;F[2]=2;F[3]=4;
	for(int i =4;i<=50; i++)
		F[i]=F[i-1]+F[i-2]+F[i-3];
}
main(){
	int t,n;
	cin>>t;
	tinh();
	while(t--){
		cin>>n;
		cout<<F[n]<<endl;
	}
}

