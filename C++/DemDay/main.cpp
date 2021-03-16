#include <iostream>

using namespace std;

const long mod = 123456789;

long Try(long n){
    if(n == 1) return 2;
    if(n == 0) return 1;
    long t = Try(n/2);
    if(n%2==0){
        return ((t%mod)*(t%mod))%mod;
    }
    else{
        return (((t%mod)*(t%mod))%mod*2)%mod;
    }
}

int main()
{
    int t;
    long n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << Try(n - 1)%mod << endl;
    }
    return 0;
}
