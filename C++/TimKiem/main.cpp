#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<int, int>dict;

bool myCompare(int a, int b){
    if(dict[a] > dict[b]) return true;
    if(dict[a] == dict[b]){
        return a < b;
    }
    return false;
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        vector<int>a;
        dict.clear();
        cin >> n >> k;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            dict[tmp]++;
        }
        if(dict.count(k)!=0){
            cout << 1;
        }
        else{
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}
