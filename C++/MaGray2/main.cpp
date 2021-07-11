#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        vector<string> a, b;
        int n = str.length();
        a.push_back("0");
        a.push_back("1");
        for(int i = 2; i <= n; i++){
            int lena = a.size();
            b.clear();
            for(int j = lena-1; j >= 0; j--){
                b.push_back(a[j]);
            }
            for(int j = 0; j < lena; j++){
                a[j] = "0" + a[j];
                b[j] = "1" + b[j];
            }
            for(int j = 0; j < lena; j++){
                a.push_back(b[j]);
            }
        }
//            for(int j = 0; j < a.size(); j++){
//                    cout << a[j] << " ";
//                }
        int lena = a.size();
        int index = 0;
        int sum = 0;
        while(index < lena && a[index] != str){
            index++;
        }
        int tmp = index;
        int len = str.length();
        for(int i = n-1; i >= 0; i--){
            if(pow(2, i) <= tmp){
                cout << "1";
                tmp -= pow(2, i);
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}
