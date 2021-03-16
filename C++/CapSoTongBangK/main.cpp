#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        int check[10000] = {0};
        int a[10000] = {0};
        memset(a, 0, sizeof a);
        memset(check, 0, sizeof check);
        cin >> n >> k;
        int div = k/2;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            check[a[i]]++;
        }
        sort(a, a+n);
        int res = 0;
        //int looper = div > a[n-1] ? a[n-1] : div;
        for(int i = 0; i < n; i++){
            if(a[i]<=div && check[k-a[i]]!=0){
                if(a[i] == k-a[i]){
                    check[k-a[i]]--;
                }
                res+=check[k-a[i]];
            }
        }
        cout << res << endl;
    }
    return 0;
}
