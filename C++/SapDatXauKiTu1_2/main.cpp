#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int len = str.length();
        int check[300]={0};
        memset(check, 0, sizeof check);
        for(int i = 0; i < len; i++){
            check[str[i]]++;
        }
        sort(check, check+300, greater<int>() );
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
