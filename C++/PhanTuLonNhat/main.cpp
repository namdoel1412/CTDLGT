#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        int a[2000] = {0};
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a+1, a+n+1, greater<int>());
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
