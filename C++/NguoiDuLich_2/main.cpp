#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n;
int a[20][20];
int check[20]={0};
int res[20]={0}, minn = 1e9+7, cmin = 1e9+7;

void Try(int index, int value){
    for(int i = 2; i <= n; i++){
        if(!check[i] && ((n-index+2)*cmin + value) < minn){
            res[index] = i;
            value+=a[i][res[index-1]];
            check[i] = 1;
            if(index < n){
                if(((n-index+1)*cmin + value) < minn){
                    Try(index+1, value);
                }
            }
            else{
//                for(int j = 1; j <= n; j++){
//                    cout << res[j] << " ";
//                }
//                cout << endl;
                value+=a[i][1];
                if(minn > value){
                    minn = value;
                }
            }
            check[i] = 0;
            value-=a[i][res[index-1]];
        }
    }
}

int main()
{
    cin >> n;
    //res[0] = 1;
    res[1]=1;
    check[1]=1;
    memset(check, 0, sizeof check);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] < cmin){
                cmin = a[i][j];
            }
        }
    }
    Try(2, 0);
    cout << minn << endl;
    return 0;
}
