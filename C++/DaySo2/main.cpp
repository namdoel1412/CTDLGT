#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    int a[10000];
    memset(a, 0, sizeof a);
    string res[1000]={""};
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        res[0] = "[";
        for(int i = 0; i < n; i++){
            res[0]+=to_string(a[i]);
            if(i != n-1) res[0]+=" ";
        }
        res[0]+="]";
        for(int i = 0; i < n - 1; i++){
            res[i+1]="[";
            for(int j = 0; j < n-i-1; j++){
                a[j] = a[j]+a[j+1];
                res[i+1]+=to_string(a[j]);
                if(j!=n-i-2) res[i+1]+=" ";
            }
            res[i+1]+="]";
        }
        for(int i = n-1; i>=0;i--){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
