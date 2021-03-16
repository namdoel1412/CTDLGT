#include <iostream>

using namespace std;
int m, n;
int a[100][100];
int trace[100][100]={0};

int Try(int index, int x, int y){
    if(trace[x][y] != 0){
        return trace[x][y];
    }
    else{
        if(index == m+n-1 && x == m && y == n){
            trace[x][y] = a[x][y];
            return trace[x][y];
        }
        else if(x > m || y > n){
            return 1e9+7;
        }
        else{
            trace[x][y] = a[x][y] + min(Try(index+1, x+1, y), Try(index+1, x, y+1));
            return trace[x][y];
        }
    }
}

int main()
{
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    cout << Try(1, 1, 1);
    return 0;
}
