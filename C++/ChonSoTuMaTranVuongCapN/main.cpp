#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[50][50]={0};
int n, k;
int res[50]={0};
int dem = 0;
string ans = "";

void Print(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum+=a[i][res[i]];
        if(sum > k) return;
    }
    if(sum == k){
        dem++;
        for(int i = 1; i <= n; i++){
            ans+=to_string(res[i]);
            ans+=" ";
        }
        ans+="\n";
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        res[i]=i;
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    Print();
    while(true){
        int index = n-1;
        while(index >= 1 && res[index] > res[index+1]){
            index--;
        }
        //cout << index << endl;
        if(index == 0){
            //Print();
            break;
        }
        else{
            int k = n;
            while(k > index && res[k] <= res[index]){
                k--;
            }
            swap(res[k], res[index]);
            int l = index+1;
            int r = n;
            while(l < r){
                swap(res[l], res[r]);
                l++;r--;
            }
            Print();
        }
    }
    cout << dem << endl;
    cout << ans << endl;

    return 0;
}
