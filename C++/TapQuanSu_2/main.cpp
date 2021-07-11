#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    int a[50] = {0};
    cin >> t;
    map<int, int> dict;
    while(t--){
        dict.clear();
        cin >> n >> k;
        int b[50] = {0};
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            //b[i] = a[i];
            dict[a[i]] = 1;
        }
        int index = k;
        while(index >= 1 && a[index]==n-k+index){
            index--;
        }
        int res = 0;
        if(index > 0){
            a[index]++;
            for(int i = index+1; i <= k; i++){
                a[i]=a[index]+i-index;
            }
            for(int i = 1; i <= k; i++){
                if(!dict.count(a[i])){
                    res++;
                }
            }
        }
        if(res == 0){
            cout << k;
        }
        else{
            cout << res;
        }
        cout << endl;
    }
    return 0;
}
