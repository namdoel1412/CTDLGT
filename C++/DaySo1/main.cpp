#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    int a[10000];
    memset(a, 0, sizeof a);
    string res[1000];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << "[";
        for(int i = 0; i < n; i++){
            cout << a[i];
            if(i != n-1) cout << " ";
        }
        cout << "]";
        cout << endl;
        for(int i = 0; i < n - 1; i++){
            cout << "[";
            for(int j = 0; j < n-i-1; j++){
                a[j] = a[j]+a[j+1];
                cout << a[j];
                if(j!=n-i-2) cout << " ";
            }
            cout << "]";
            cout << endl;
        }
    }
    return 0;
}
