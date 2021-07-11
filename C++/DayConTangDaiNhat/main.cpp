#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    int f[1100] = {1};
    for(int i = 0; i <= n; i++){
        f[i] = 1;
    }
    //memset(f, 1, sizeof f);
    int result = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[j] > a[i]){
                f[j] = max(f[j], f[i]+1);
            }
        }
        result = max(result, f[i]);
    }
    cout << result;
    return 0;
}
