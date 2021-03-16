#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, a[120]={0}, res[120]={0}, hasResult = -1;

void Print(){
    hasResult = 1;
    cout << "[";
    int k = n;
    while(k >= 1 && res[k] ==0){
        k--;
    }
    for(int i = 1; i <= n; i++){
            //cout << res[i] << " ";
        if(res[i] == 1){
            cout << a[i];
            if(i != k) cout << " ";
        }
    }
    cout << "] ";
}

void FindSum(int tong, int index){
    if(index == n+1){
        if(tong == 0){
            Print();
        }
        return;
    }
    for(int i = 1; i >= 0; i--){
        res[index]=i;
        if(a[index]*i<=tong){
            tong-=a[index]*i;
            FindSum(tong, index+1);
            tong+=a[index]*i;
        }
    }
}

void SinhNhiPhan(int tong, int index){
    if(index == n+1){
        //if(tong == 0){
            Print();
        //}
        return;
    }
    for(int i = 1; i >= 0; i--){
        res[index]=i;
        if(index <= n){
            SinhNhiPhan(tong, index+1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    memset(a, 0, sizeof a);
    memset(res, 0, sizeof res);
    while(t--){
        int k;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            res[i] = 1;
        }
        sort(a, a+n+1);
        hasResult = -1;
        FindSum(k, 1);
        if(hasResult == -1){
            cout << "-1" << endl;
        }
        else{
            cout << endl;
        }
    }
    return 0;
}
