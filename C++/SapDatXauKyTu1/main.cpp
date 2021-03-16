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
        int check[200]={0};
        int len = str.length();
        for(int i = 0; i < len; i++){
            check[str[i]]++;
        }
        sort(check, check+130, greater<int>());
        int maxx = check[0];
        if(len - maxx < maxx - 1){
            cout << "-1";
        }
        else{
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}
