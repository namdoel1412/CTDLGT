#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<int, int> checker;

const long mod = 1e9+7;

long LuyThua(int n, int k){
    map<int, int>::iterator it;
    if(checker.find(k) != checker.end()){
        it = checker.find(k);
        return (it->second)%mod;
    }
    if(k == 1) return n;
    if(k == 0) return 1;
    int t = LuyThua(n, k/2)%mod;
    if(k%2==0){
        checker.insert(pair<int, int>(k, (t%mod*t%mod)%mod));
    }
    else{
        checker.insert(pair<int, int>(k, (((t%mod)*(t%mod))%mod*n)%mod));
    }
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        checker.clear();
        LuyThua(n, k);
        map<int, int>::iterator res;
        res = checker.find(k);
        cout << res->second << endl;
    }
    return 0;
}
