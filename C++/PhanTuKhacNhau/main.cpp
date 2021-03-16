#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t, n;
    cin >> t;
    vector<ll> vect, vect2;
    while(t--){
        cin >> n;
        ll tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            vect.push_back(tmp);
        }
        int res;
        for(int i = 0; i < n-1; i++){
            cin >> tmp;
            vect2.push_back(tmp);
        }
        for(int i = 0; i < n-1; i++){
            if(vect2[i] != vect[i]){
                cout << i + 1 << endl;
                break;
            }
        }
        vect.clear();
        vect2.clear();
    }
    return 0;
}
