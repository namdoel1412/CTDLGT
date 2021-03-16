#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Print(int a[], int k){
    for(int i = 1; i <= k; i++){
        cout << a[i];
    }
    cout << " ";
}

int main()
{
    int t, n, k;
    int a[10000];
    memset(a, 0, sizeof a);
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
        Print(a, k);
        while(true){
            int i = k;
            while(i >= 1 && a[i] == n-k+i){
                i--;
            }
            if(i == 0){
                break;
            }
            a[i]++;
            for(int j = i + 1; j <= k; j++){
                a[j] = a[i]+j-i;
            }
            Print(a, k);
        }
        cout << endl;
    }
    return 0;
}
