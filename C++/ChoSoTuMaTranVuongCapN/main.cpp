#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    int a[20][20];
    int res[20]={0};
    for(int i = 1; i <= n; i++){
        res[i]=i;
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    string result = "";
    int dem = 0;
    while(true){
        int tong = 0;
        for(int i = 1; i <= n; i++){
            tong+=a[i][res[i]];
        }
        if(tong == sum){
            dem++;
            for(int i = 1; i <= n; i++){
                //cout << res[i] << " ";
                result+=to_string(res[i]);
                result+=" ";
            }
            //cout << endl;
            result += "\n";
        }
        int k = n-1;
        while(k >= 1 && res[k] >= res[k+1]){
            k--;
        }
        if(k == 0){
            break;
        }
        else{
            int index = n;
            while(index >= 1 && res[index] < res[k]){
                index--;
            }
            swap(res[index], res[k]);
            int l = k+1, r = n;
            while(l < r){
                swap(res[l], res[r]);
                l++; r--;
            }
        }
    }
    cout << dem << endl;
    cout << result;

    return 0;
}
