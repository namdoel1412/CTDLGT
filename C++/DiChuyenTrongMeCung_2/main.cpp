#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n;
int a[15][15] = {0}, check[15][15]={0};
char res[30];
int hasRes = 0;
void Print(int index){
    //cout << index << endl;
    hasRes = 1;
    for(int i = 1; i < index; i++){
        cout << res[i];
    }
    cout << " ";
}

void Try(int x, int y, int index){
    if(check[x][y] == 0 && x > 0 && y > 0 && y <= n && x <= n && a[x][y] == 1){
        check[x][y] = 1;
        if(x == n && y == n){
            Print(index);
        }
        if(x+1 <= n){
            res[index]='D';
            Try(x+1, y, index+1);
        }
        if(y-1 >= 1){
            res[index]='L';
            Try(x, y-1, index+1);
        }
        if(y+1 <= n){
            res[index]='R';
            Try(x, y+1, index+1);
        }
        if(x-1 >= 1){
            res[index]='U';
            Try(x-1, y, index+1);
        }
        check[x][y] = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        hasRes = 0;
        memset(check, 0, sizeof check);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                check[i][j] = 0;
                cin >> a[i][j];
            }
        }
        Try(1, 1, 1);
        if(hasRes == 0){
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}
