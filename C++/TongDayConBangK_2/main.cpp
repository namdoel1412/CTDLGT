#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[100000];
int res[100000]={0};
int dem = 0;

void Print(){
    dem++;
    for(int i = 1; i <= n; i++){
        if(res[i]==1){
            cout << a[i] << " ";
        }
    }
    //memset(res, 0, sizeof res);
    cout << endl;
}

void Try(int index, int sum){
    for(int i = 0; i <= 1; i++){
        res[index]=i;
        if(index == n){
            if(sum + i*a[index] == k){
                Print();
            }
        }
        else{
            Try(index+1, sum+i*a[index]);
        }
    }
}

int main()
{
    memset(res, 0, sizeof res);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    Try(1, 0);
    if(dem == 0){
        cout << "-1";
    }
    else{
        cout << dem;
    }
    cout << endl;
    return 0;
}
