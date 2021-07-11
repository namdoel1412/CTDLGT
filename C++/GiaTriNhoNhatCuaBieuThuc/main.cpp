#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a, b;
        ll tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i = 0; i < n; i++){
            cin >> tmp;
            b.push_back(tmp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i]*b[i];
        }
        cout << sum << endl;
    }
    return 0;
}
