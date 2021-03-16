#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        vector<int>a;
        vector<int>b;
        cin >> n;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        b = a;
        sort(a.begin(), a.end());
        int left = -1, right = n+1;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                left = i+1;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[i]){
                right = i+1;
                break;
            }
        }
        if(left!=-1 && right != n+1){
            cout << left << " " << right;
        }
        else{
            cout << 0 << " " << 0;
        }
        cout << endl;
    }
    return 0;
}
