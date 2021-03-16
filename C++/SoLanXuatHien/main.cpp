#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        int a[2000] = {0};
        map<int, int> newMap;
        //memset(check, 0, sizeof check);
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            newMap[a[i]]++;
        }
        if(newMap[k]==0){
            cout << "-1";
        }
        else{
            cout << newMap[k];
        }
        cout << endl;
    }
    return 0;
}
