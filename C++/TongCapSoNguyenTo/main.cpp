#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkNT(int k){
    int tmp = sqrt(k);
    for(int i = 2; i <= tmp; i++){
        if(k%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int tmp = n/2;
        int res1 = -1, res2 = -1;
        for(int i = 2; i <= tmp; i++){
            if(checkNT(i)){
                if(checkNT(n-i)){
                    res1 = i;
                    res2 = n-i;
                    break;
                }
            }
        }
        if(res1 == -1){
            cout << "-1";
        }
        else{
            cout << res1 << " " << res2;
        }
        cout << endl;
    }
    return 0;
}
