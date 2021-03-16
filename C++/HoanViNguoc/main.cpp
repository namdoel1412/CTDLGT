#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Print(int a[], int n){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}

int main()
{
    int t, n;
    int a[10000];
    memset(a, 0, sizeof a);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = n; i >= 1; i--){
            a[n-i+1] = i;
        }
        Print(a, n);
        while(true){
            int index = n;
            while(index >= 1 && a[index-1] < a[index]){
                index--;
            }
            if(index == 0){
                break;
            }
            else{
                index--;
                int k = n;
                while(k >= 1 && a[k]>a[index]){
                    k--;
                }
                swap(a[k], a[index]);
                int l = index + 1, r = n;
                while(l < r){
                    swap(a[l], a[r]);
                    l++;r--;
                }
                Print(a, n);
            }
        }
        cout << endl;
    }
    return 0;
}
