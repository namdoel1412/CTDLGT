#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        int a, b;
        vector<int> ke[1100];
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        for(int i = 0; i < c; i++){
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            int len = ke[i].size();
            for(int j = 0; j < len; j++){
                cout << ke[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
