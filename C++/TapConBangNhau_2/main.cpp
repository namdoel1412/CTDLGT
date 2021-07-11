#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[120], n, halfSum, isOk = 0,check[120];
//
//void Try(int index, int sum, int dem){
//    if(index > n){
//        return;
//    }
//    for(int i = 0; i <= 1; i++){
//        sum+=a[index]*i;
//        if(sum == halfSum){
//            isOk = 1;
//            return;
//        }
//        else if(sum > halfSum){
//            return;
//        }
//        else{
//            Try(index+1, sum, dem);
//        }
//        sum-=a[index]*i;
//    }
//}

void Try_2(int tong, int dem){
    if(dem == 2){
        isOk = 1;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            //tong+=a[i];
            check[i] = 1;
            if(tong + a[i] == halfSum){
                Try_2(0, dem+1);
                return;
            }
            else if(tong + a[i] > halfSum){
                check[i] = 0;
                return;
            }
            else{
                Try_2(tong + a[i], dem);
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
        int tmpSum = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            tmpSum+=a[i];
        }
        if(tmpSum%2 != 0){
            cout << "NO";
        }
        else{
            memset(check, 0, sizeof check);
            halfSum = tmpSum/2;
            isOk = 0;
            Try_2(0, 0);
            if(isOk == 0){
                cout << "NO";
            }
            else{
                cout << "YES";
            }
        }
        cout << endl;
    }
    return 0;
}
