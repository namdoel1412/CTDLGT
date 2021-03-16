#include <iostream>

using namespace std;
int a[100][100];
int n;
char res[100];
int subres = -1;

void Print(){
    for(int i = 1; i <= 2*n-2; i++){
        cout << res[i];
    }
    cout << " ";
    subres = 1;
}

void FindAWay(int index, int x, int y){
    if(a[x][y] == 1){
        if(index == 2*n-1 && x == n && y == n){
            Print();
            return;
        }
        else if(x > n || y > n){
            return;
        }
        else{
            if(x+1 <= n){
                res[index]='D';
                FindAWay(index+1, x+1, y);
            }
            if(y+1 <= n){
                res[index]='R';
                FindAWay(index+1, x, y+1);
            }
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
        subres=-1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
            res[i] = ' ';
        }
        FindAWay(1, 1, 1);
        if(subres == -1) cout << subres;
        cout << endl;
    }
    return 0;
}
