#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    int a[10000];
    memset(a, 0, sizeof a);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int index = n;
        while(index > 1){
            if(a[index - 1] < a[index]){
                break;
            }
            else{
                index--;
            }
        }
        if(index == 1){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            index--;
            int k = n;
            while(k >= 1){
                if(a[k] > a[index]){
                    break;
                }
                k--;
            }
            swap(a[k], a[index]);
            int l = index + 1;
            int r = n;
            while(l < r){
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
