#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int t, n, k;
int a[25];
void Check(){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            dem++;
        }
        if(dem > k) break;
    }
    if(dem == k){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}

void Try(int index){
    for(int i = 0; i <= 1; i++){
        a[index] = i;
        if(index < n){
            Try(index+1);
        }
        else{
            Check();
        }
    }
}

int main()
{
    memset(a,0,sizeof a);
    cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
    }
    return 0;
}
