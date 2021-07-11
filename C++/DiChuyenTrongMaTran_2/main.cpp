#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, m, a[120][120], trace[120][120];

int Try(int index, int x, int y){
    if(x == n && y == m){
        return 1;
    }
    if(x > n || y > m){
        return 0;
    }
    if(trace[x][y] != -1){
        return trace[x][y];
    }
    else{
        trace[x][y] = Try(index+1, x+1, y) + Try(index+1, x, y+1);
        return trace[x][y];
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        memset(trace, -1, sizeof trace);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
                trace[i][j] = -1;
            }
        }
        cout << Try(0, 1, 1) << endl;
    }
    return 0;
}
