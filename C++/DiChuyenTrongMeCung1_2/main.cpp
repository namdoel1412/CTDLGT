#include <iostream>

using namespace std;
int n, a[50][50]={0};
char res[50];
int subres=-1;

void Print(){
    for(int i = 1; i <= 2*n-2; i++){
        cout << res[i];
    }
    cout << " ";
    subres = 1;
}


void Try(int index, int x, int y){
    if(a[x][y] == 1){
        if(index == 2*n-1 && x == n && y == n){
            Print();
            return;
        }
        if(x > n || y > n){
            return;
        }
        if(x+1 <= n){
            res[index] = 'D';
            Try(index+1, x+1, y);
        }
        if(y+1 <= n){
            res[index] = 'R';
            Try(index+1, x, y+1);
        }
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        subres = -1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
            res[i] = ' ';
        }
        Try(1, 1, 1);
        if(subres==-1){
            cout << subres;
        }
        cout << endl;
    }
    return 0;
}
