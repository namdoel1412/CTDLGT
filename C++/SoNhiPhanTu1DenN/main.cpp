#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string str="1";
        while(n--){
            cout << str << " ";
            int len = str.length();
            int k = len-1;
            while(k >= 0 && str[k]!='0'){
                k--;
            }
            if(k < 0){
                for(int i = 0; i < len; i++){
                    str[i]='0';
                }
                str="1"+str;
            }
            else{
                str[k]='1';
                for(int i = k+1; i < len; i++){
                    str[i]='0';
                }
            }
        }
        cout << endl;
    }
    return 0;
}
