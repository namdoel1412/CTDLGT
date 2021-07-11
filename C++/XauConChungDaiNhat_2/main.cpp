#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        int len1 = str1.length();
        int len2 = str2.length();
        str1 = ' ' + str1;
        str2 = ' ' + str2;
        // Phải khai báo vector để ko bị time limit exceed
        vector< vector<int> > f(len1+1, vector<int>(len2+1, 0));
        //int check[1000][1000] = {0};
        //map<pair<int, int>, int> dict;
//        memset(check, 0, sizeof check);
//        check[0][0] = 0;
//        check[1][0] = 0;
//        check[0][1] = 0;
        for(int i = 1; i <= len1; i++){
            for(int j = 1; j <= len2; j++){
                if(str1[i] == str2[j]){
                    f[i][j] = 1+f[i-1][j-1];
                }
                else{
                    f[i][j] = max(f[i-1][j], f[i][j-1]);
                }
            }
        }
        cout << f[len1][len2] << endl;
    }
    return 0;
}
