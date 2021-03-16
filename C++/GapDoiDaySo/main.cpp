#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long pow2[100];

int Try(int n, long k){
    if(n == 1) return 1;
    if(k == pow2[n-1]){
        return n;
    }
    else{
        if(k > pow2[n-1]) k-=pow2[n-1];
        Try(n-1, k);
    }
}

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i <= 50; i++){
        pow2[i] = pow(2, i);
    }
    long k;
    while(t--){
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
    return 0;
}
