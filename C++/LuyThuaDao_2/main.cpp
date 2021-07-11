#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const long long MOD = 1e9+7;

ll LuyThua(ll n, ll r){
    if(r == 0) return 1;
    ll t = LuyThua(n, r/2);
    if(r%2==0){
        return t*t%MOD;
    }
    else{
        return n*(t*t%MOD)%MOD;
    }
}

long long dao(long long n){
	long long d=0;
	while(n>0){
		d=d*10+n%10;
		n/=10;
	}
	return d;
}

int main()
{
    int t;
    cin >> t;
    //cout << (long)1e9+7 << endl;
    ll n, k;
    while(t--){
        cin >> n;
        ll tmp = n;
        //long tmp1 = n, tmp2 = n;
        long long k = dao(n);
        // string str = "";
//        while (tmp > 0)
//        {
//            str+=to_string(tmp%10);
//            tmp/=10;
//        }
//        stringstream geek(str);
//        geek >> r;
        //cout << r << endl;
        cout << LuyThua(n, k) << endl;
    }
    return 0;
}
