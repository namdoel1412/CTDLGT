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
        if(str == "1") cout << "0";
        else if(str == "0") cout << "1";
        else{
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
            int len = str.length();
            int index = 0;
            int sum = 0;
            while(index < len){
                if(str[index] == '1'){
                    sum+=pow(2, len-index-1);
                }
                index++;
            }
            cout << a[sum];
            cout << endl;
        }
    }
    return 0;
}
