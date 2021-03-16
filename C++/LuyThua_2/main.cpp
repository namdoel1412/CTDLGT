#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<int, int> checker;

const long mod = 1e9+7;

long LuyThua(int n, int k){
    if(k == 1) return n;
    if(k == 0) return 1;
    int t = LuyThua(n, k/2)%mod;
    if(k%2==0){
        return (t%mod*t%mod)%mod;
    }
    else{
        return (((t%mod)*(t%mod))%mod*n)%mod;
    }
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << LuyThua(n, k) << endl;
    }
    return 0;
}
