#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long fibo[110]={0};

char Try(int n, long long k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    //return Try()
    if(fibo[n-2] < k){
        return Try(n-1, k - fibo[n-2]);
    }
    else{
        return Try(n-2, k);
    }
}

int main()
{
    int t, n;
    long long k;
    cin >> t;
    fibo[1]=1;
    fibo[2]=1;
    for(int i = 3; i < 93; i++){
        fibo[i] = fibo[i-2]+fibo[i-1];
        //cout << fibo[i] << " ";
    }
    while(t--){
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
    return 0;
}
