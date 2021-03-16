#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const long mod = 1e9+7;

long reverseNum(long n){
    string str="";
    while(n > 0){
        str+=(n%10+48);
        n/=10;
    }
    stringstream geek(str);
    long res = 0;
    geek >> res;
    return res;
}

long LuyThua(long n, long rev){
    if(rev == 0) return 1;
    if(rev == 1) return n;
    long t = LuyThua(n, rev/2)%mod;
    if(rev%2==0){
        return ((t%mod)*(t%mod))%mod;
    }
    else{
        return ((((t%mod)*(t%mod))%mod)*n)%mod;
    }
}

int main()
{
    int t;
    cin >> t;
    long n;
    while(t--){
        cin >> n;
        long rev = reverseNum(n);
        cout << rev << endl;
        cout << LuyThua(n, n)%mod << endl;
    }
    return 0;
}
