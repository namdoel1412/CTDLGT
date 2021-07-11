#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a, b;
        map<long long, long long> dict;
        long long tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i = 0; i < n-1; i++){
            cin >> tmp;
            b.push_back(tmp);
            dict[tmp]++;
        }
        for(int i = 0; i < n; i++){
            if(dict.count(a[i]) == 0){
                cout << i+1 << endl;
                break;
            }
        }
        a.clear();b.clear();
    }
    return 0;
}
