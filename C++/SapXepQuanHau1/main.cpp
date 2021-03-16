#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, dem = 0;
bool cot[25], cheo1[25], cheo2[25];

void Try(int index){
    for(int i = 1; i <= n; i++){
        if(cot[i] && cheo1[i-index+n] && cheo2[index+i]){
            cot[i] = false;
            cheo1[i-index+n] = false;
            cheo2[index+i] = false;
            if(index == n){
                dem++;
            }
            else{
                Try(index+1);
            }
            cot[i] = true;
            cheo1[i-index+n] = true;
            cheo2[index+i] = true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        dem = 0;
        memset(cot, true, sizeof cot);
        memset(cheo1, true, sizeof cheo1);
        memset(cheo2, true, sizeof cheo2);
        Try(1);
        cout << dem << endl;
    }
    return 0;
}
