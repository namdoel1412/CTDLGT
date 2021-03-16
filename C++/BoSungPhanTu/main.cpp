#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        map<int, int> dict;
        cin >> n;
        int tmp, maxx = -1e9-7, minn = 1e9+7;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            dict[tmp]++;
            if(tmp > maxx){
                maxx = tmp;
            }
            if(tmp < minn){
                minn = tmp;
            }
        }
        int res = 0;
        for(int i = minn+1; i < maxx; i++){
            if(dict.count(i)==0){
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
