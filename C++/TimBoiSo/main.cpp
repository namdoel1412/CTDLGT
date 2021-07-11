#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int tmp = n;
        int len = 0;
        while(tmp>0){
            tmp/=10;
            len++;
        }
        string str="9";
        for(int i = 2; i<=len;i++){
            str+="0";
        }
        while(true){
            stringstream geek(str);
            long pre = 9;
            geek >> pre;
            if(pre % n == 0){
                cout << pre << endl;
                break;
            }
            else{
                int len2 = str.length();
                int index = len2-1;
                while(index >= 0 && str[index]=='9'){
                    index--;
                }
                if(index == -1){
                    for(int i = 1; i < len2; i++){
                        str[i] = '0';
                    }
                    str+="0";
                }
                else{
                    str[index] = '9';
                    for(int i = index+1; i < len2; i++){
                        str[i] = '0';
                    }
                }
            }
        }
    }
    return 0;
}
