#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, n;;
    cin >> t;
    while(t--){
        cin >> m >> n;
        vector<long>a;
        long tmp;
        for(int i = 0; i < m+n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < m + n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
