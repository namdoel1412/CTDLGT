#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string str="6";
        long long res = 0;
        int tmp = 1;
        while(tmp <= n){
            res+=pow(2, tmp);
            tmp++;
        }
        cout << res << endl;
        while(res--){
            int len = str.length();
            if(len == 0) break;
            int k = len - 1;
            cout << str << " ";
            while(k>=0 && str[k]!='6'){
                k--;
            }
            if(k==-1){
                for(int j = 0; j < len; j++){
                    str[j]='6';
                }
                str="6"+str;
            }
            else{
                str[k]='8';
                for(int i = k+1; i < len; i++){
                    str[i] = '6';
                }
            }
        }
        cout << endl;
    }
    return 0;
}
