#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string str="";
        long long res = 0;
        for(int i = 1; i <= n; i++){
            str+='8';
            res+=pow(2, i);
        }
        cout << res << endl;
        while(res--){
            int len = str.length();
            if(len == 0) break;
            int k = len - 1;
            cout << str << " ";
            while(k>=0 && str[k]!='8'){
                k--;
            }
            if(k==-1){
                str.erase(0, 1);
                for(int j = 0; j < len-1; j++){
                    str[j]='8';
                }
            }
            else{
                str[k]='6';
                for(int i = k+1; i < len; i++){
                    str[i] = '8';
                }
            }
        }
        cout << endl;
    }
    return 0;
}
