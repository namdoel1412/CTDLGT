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
    int t, n;
    cin >> t;
    while(t--){
        vector<int>a;
        dict.clear();
        cin >> n;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            dict[tmp]++;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end(), myCompare);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
