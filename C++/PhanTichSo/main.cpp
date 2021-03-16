#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, n;

void Print(int a[]){
    cout << "(";
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] != 0){
            dem+=a[i];
            cout << a[i];
            if(dem < n){
                cout << " ";
            }
        }
        else{
            break;
        }
    }
    cout << ") ";
}

int main()
{
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+5]={0};
        memset(a, 0, sizeof a);
        a[1] = n;
        Print(a);
        while(true){
            int i=n;
            int dem = 0;
            while(i>=1 && (a[i]==0 || a[i]==1)){
                if(a[i]==1){
                    dem++;
                }
                i--;
            }
            if(i>=1){
                a[i]--;
                dem++;
                int tmp = dem/a[i];
                int mod = dem%a[i];
                int pivot = a[i];
                for(int j=1; j<=tmp; j++){
                    a[++i] = pivot;
                }
                i++;
                a[i] = mod;
                for(int j = i+1; j <= n; j++){
                    a[j] = 0;
                }
                Print(a);
            }
            else{
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
