#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[120], n, check[120], s;
bool result = false;
void Try(int tong, int dem){
    if(dem == 2){
        result = true;
    }
    if(result == true){
        return;
    }

    for(int i = 1; i <= n; i++){
        if(!check[i]){
            check[i] = 1;
            if(tong+a[i] == s){
                Try(0, dem+1);
                return;
            }
            else if(tong + a[i] > s){
                check[i] = 0;
                return;
            }
            else{
                Try(tong+a[i], dem);
            }
            check[i] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int tong = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            tong+=a[i];
        }
        if(tong%2!=0){
            cout << "NO";
        }
        else{
            memset(check, 0, sizeof check);
            s = tong/2;
            result = false;
            Try(0, 0);
            if(result == true){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
        cout << endl;
    }
    return 0;
}
