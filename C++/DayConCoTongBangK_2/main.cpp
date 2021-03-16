#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[200]={0}, res[200]={0};
int n;
int subres = -1;

void Print(){
    int dem = 0;
    int tmp = n;
    cout << "[";
    while(tmp >= 1 && res[tmp] == 0){
        tmp--;
    }
    for(int i = 1; i <= n; i++){
        if(res[i] == 1){
            cout << a[i];
            if(i != tmp){
                cout << " ";
            }
        }
    }
    cout << "] ";
    subres = 1;
}

void Try(int index, int k){
    if(k==0){
        Print();
        return;
    }
    if(k<0){
        return;
    }
    for(int i = 1; i>=0; i--){
        if(index <= n){
            res[index]=i;
            if(k >= 0){
                k-=i*a[index];
                Try(index+1, k);
                k+=i*a[index];
            }
            else return;
        }
        else{
            return;
        }
    }
}

int main()
{
    int t, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        subres = -1;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        Try(1, k);
        if(subres == -1){
            cout << subres;
        }
        cout << endl;
    }
    return 0;
}
