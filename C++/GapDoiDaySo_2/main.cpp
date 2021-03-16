#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, n;
    cin >> t;
    long k;
    while(t--){
        cin >> n >> k;
        long tmp = k;
        int mu = n;
        while(tmp!=0){
            for(int i = mu; i >= 0; i--){
                if(tmp >= pow(2, i)){
                    tmp-=pow(2, i);
                    mu = i;
                    break;
                }
            }
        }
        cout << mu + 1 << endl;
    }
    return 0;
}
