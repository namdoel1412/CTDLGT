#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, a[100000];
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
//        for(int i = 1; i <= n; i++){
//            cout << a[i] << " ";
//        }
        long sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            if(i < k){
                sum1+=a[i];
            }
            else{
                sum2+=a[i];
            }
        }
        int maxx1 = abs(sum1 - sum2);
        long sum3 = 0, sum4 = 0;
        for(int i = 0; i < n; i++){
            if(i < n-k){
                sum3+=a[i];
            }
            else{
                sum4+=a[i];
            }
        }
        int maxx2 = abs(sum3 - sum4);
        int res = max(maxx1, maxx2);
        cout << res << endl;
    }
    return 0;
}
