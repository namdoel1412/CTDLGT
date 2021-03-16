#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, n;;
    cin >> t;
    while(t--){
        cin >> m >> n;
        long maxx = -1e9+7;
        long minn = 1e9+7;
        long tmp;
        for(int i = 0; i < m; i++){
            cin >> tmp;
            if(tmp > maxx){
                maxx = tmp;
            }
        }
        for(int i = 0; i < m; i++){
            cin >> tmp;
            if(tmp < minn){
                minn = tmp;
            }
        }
        cout << maxx*minn << endl;
    }
    return 0;
}
