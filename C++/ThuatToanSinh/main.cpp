#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "";
    int tmp = 0;
    if(n%2==0){
        tmp=n/2;
    }
    else{
        tmp=(n+1)/2;
    }
    for(int i = 0; i < tmp; i++){
        str+='0';
    }
    int dem = pow(2, tmp);
    while(true){
        //cout << str << endl;
        int len = str.length();
        for(int i = 0; i < len; i++){
            cout << str[i] << " ";
        }
        if(n%2==0){
            for(int i = len-1; i >= 0; i--){
                cout << str[i] << " ";
            }
        }
        else{
            for(int i = len-2; i >= 0; i--){
                cout << str[i] << " ";
            }
        }
        cout << endl;
        int k = len-1;
        while(k>=0 && str[k]!='0'){
            k--;
        }
        if(k==-1){
            break;
        }
        else{
            str[k]='1';
            for(int i = k+1; i < len; i++){
                str[i]='0';
            }
        }
    }
    return 0;
}
