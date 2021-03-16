#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, res=0, cot[20]={0}, cheo1[20]={0}, cheo2[20]={0};

void Try(int index){
    for(int i = 1; i <= n; i++){
        if(!cot[i] && !cheo1[index+i] & !cheo2[index-i+n]){
            cot[i] = 1;
            cheo1[index+i]=1;
            cheo2[index-i+n]=1;
            if(index == n){
                res++;
            }
            else{
                Try(index+1);
            }
            cot[i] = 0;
            cheo1[index+i]=0;
            cheo2[index-i+n]=0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        memset(cot, 0, sizeof cot);
        memset(cheo1, 0, sizeof cheo1);
        memset(cheo2, 0, sizeof cheo2);
        res = 0;
        cin >> n;
        Try(1);
        cout << res << endl;
    }
    return 0;
}
