#include <iostream>

using namespace std;
int m, n;
int a[25][25];
int b[25][25];
char res[25];
void init(){
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            b[i][j] = -1;
        }
    }
}

int FindAWay(int x, int y, int index){
    if(a[x][y] == 1){
        if(index == m+n-1 && x == m && y == n)
        {
            return 1;
        }
        if(x > m || y > n){
            return 0;
        }
        if(b[x+1][y] != -1 && b[x][y+1] != -1){
            b[x][y] = b[x+1][y] + b[x][y+1];
        }
        else if(b[x+1][y] != -1){
            b[x][y] = b[x+1][y] + FindAWay(x, y+1, index+1);
        }
        else if(b[x][y+1] != -1){
            b[x][y] = b[x][y+1] + FindAWay(x+1, y, index+1);
        }
        else{
            b[x][y] = FindAWay(x+1, y, index+1) + FindAWay(x, y+1, index+1);
        }
        // Note that
        return b[x][y];
//        if(b[x][y] == -1){
//            b[x][y] = FindAWay(x+1, y, index+1) + FindAWay(x, y+1, index+1);
//        }
//        return b[x][y];
    }
    return 0;
}

int main()
{
    init();
    cout << FindAWay(1, 1, 1) << endl;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
