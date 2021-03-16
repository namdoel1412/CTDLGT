#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int m, n, a[120][120], trace[120][120]={-1};

int Try(int index, int x, int y){
    if(index == m+n-1 && x == m && y == n){
        return 1;
    }
    if(x > m || y > n){
        return 0;
    }
    if(trace[x][y] != -1){
        return trace[x][y];
    }
    else{
        trace[x][y] = Try(index+1, x+1, y) + Try(index+1, x, y+1);
    }
    return trace[x][y];
    //return Try(index+1, x+1, y) + Try(index+1, x, y+1);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        memset(trace, -1, sizeof trace);
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                trace[i][j] = -1;
            }
        }
        cout << Try(1, 1, 1) << endl;
        //cout << trace[1][1] << endl;
    }
    return 0;
}
