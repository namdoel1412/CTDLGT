#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[k+10] = {0};
        int check[n+10] = {0};
        int res = 0;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            check[a[i]]++;
        }
        int index = k;
        while(index >=1 && a[index]==n-k+index){
            index--;
        }
        if(index >= 1){
            a[index]++;
            index++;
            for(int i = index; i <= k; i++){
                a[i] = a[index-1]+(i-index+1);
            }
            for(int i = 1; i <= k; i++){
                if(check[a[i]]==0){
                    res++;
                }
            }
        }
        else{
            res = k;
        }
        cout << res << endl;
    }
    return 0;
}
