#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    vector<int>a;
    while(t--){
        cin >> n;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        a.clear();
    }
    return 0;
}
