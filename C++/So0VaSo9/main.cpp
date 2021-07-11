#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string str = "9";
        stringstream geek(str);
        long long tmp;
        while(true){
            stringstream geek(str);
            geek >> tmp;
            if(tmp%n==0){
                cout << tmp << endl;
                break;
            }
            else{
                int len = str.length();
                int k = len-1;
                while(k>=0 && str[k]!='0'){
                    k--;
                }
                if(k<0){
                    for(int i = 0; i < len; i++){
                        str[i]='0';
                    }
                    str="9"+str;
                }
                else{
                    str[k]='9';
                    for(int i = k+1; i < len; i++){
                        str[i]='0';
                    }
                }
            }
        }
    }
    return 0;
}
