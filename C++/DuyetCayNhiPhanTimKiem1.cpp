#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node (int x){
		data =x;
		left =NULL;
		right =NULL;
		
	}
};
typedef node NODE;

void taoCay(NODE* &t,int x){
	if(t==NULL){
		NODE *p = new NODE(x);
		t=p;
		
	}else{
		if(x< t->data ) taoCay(t->left,x);
		if(x> t->data) taoCay(t -> right,x);
	}
}
void solve (NODE* t){
	if(t !=NULL){
		solve (t ->left);
		solve(t -> right);
		cout<< t ->data <<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		NODE* t =NULL;
		while(n--){
			int x;
			cin>>x;
			taoCay(t,x);
		}
		solve(t);
		cout<<endl;
	}
}
