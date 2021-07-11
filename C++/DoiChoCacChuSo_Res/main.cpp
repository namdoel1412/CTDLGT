#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    while(t--){
        int n;
        cin >> k;
        string str;
        cin >> str;
        int len = str.length();
        for(int i = 0; i < len && k > 0; i++){
            char maxx=str[len-1];
            int vt = len-1;
            for(int j = len-1; j > i; j--){
                if(maxx < str[j] && str[j] > str[i]){
                    maxx = str[j];
                    vt = j;
                }
            }
            if(maxx > str[i] && k > 0){
                swap(str[i], str[vt]);
                k--;
            }
        }
        cout << str << endl;
    }
    return 0;
}
