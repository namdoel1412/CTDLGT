#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string str;
        vector<string> vect;
        for(int i = 0; i < n; i++){
            cin >> str;
            vect.push_back(str);
        }
        int check[100] = {0};
        memset(check, 0, sizeof check);
        for(int i = 0; i < n; i++){
            int len = vect[i].length();
            for(int j = 0; j < len; j++){
                check[vect[i][j]]++;
            }
        }
        vector<int>res;
        for(int i = 48; i <= 57; i++){
            if(check[i]>0){
                res.push_back(i-48);
            }
        }
        sort(res.begin(), res.end());
        int len2 = res.size();
        for(int i = 0; i < len2; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
