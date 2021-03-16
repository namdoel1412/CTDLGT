#include <iostream>
#include "src/DeQuy.cpp"

using namespace std;
int m, n;
int a[25][25];
char res[25];
void init(){
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void FindAWay(int x, int y, int index){
    if(index == m+n-1){
        for(int i = 1; i <= m+n-1; i++){
            cout << res[i];
        }
        cout << endl;
        return;
    }
    if(x+1<=m && y <= n && a[x+1][y] == 1){
        res[index]='D';
        FindAWay(x+1, y, index+1);
    }
    if(x<=m && y+1 <= n && a[x][y+1] == 1){
        res[index]='R';
        FindAWay(x, y+1, index+1);
    }
}

int main()
{
    init();
    FindAWay(1, 1, 1);
}
