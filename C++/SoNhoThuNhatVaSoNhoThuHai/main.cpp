#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        int tmp;
        vector<int> a;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        if(n == 1){
            cout << "-1";
        }
        else{
            if(a[0] != a[1]){
                cout << a[0] << " " << a[1];
            }
            else{
                cout << "-1";
            }
        }
        cout << endl;
    }
    return 0;
}
