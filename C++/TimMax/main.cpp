#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long a[n+100];
        long sum = 0;
        long tmp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
//        for(int i = 0; i < n; i++){
//            cout << a[i] << " ";
//        }
        for(int i = 0; i < n; i++){
            sum+=(i*a[i]%mod)%mod;
            sum%=mod;
        }
        cout << sum << endl;
    }
    return 0;
}
