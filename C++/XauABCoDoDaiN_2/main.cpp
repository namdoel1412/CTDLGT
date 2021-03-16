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
        for(int i = 0; i < n; i++){
            str+='A';
        }
        cout << str << " ";
        int len = str.length();
        while(true){
            int k = len-1;
            while(k>=0 && str[k]=='B'){
                k--;
            }
            if(k>=0){
                str[k]='B';
                k++;
                for(int i = k; i < len; i++){
                    str[i] = 'A';
                }
                cout << str << " ";
            }
            else{
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
