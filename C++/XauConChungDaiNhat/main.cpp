#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val = -1;
};

map<pair<string, string>, Node> dict;
vector< vector<int> > f(1010, vector<int>(1010, -1));

int findSubsquence(string str1, string str2){
    if(f[str1.length()][str2.length()] != -1) return f[str1.length()][str2.length()];
    int len1 = str1.length();
    int len2 = str2.length();
    if(len1 == 0 || len2 == 0){
        f[len1][len2] = 0;
        return 0;
    }
    if(str1[len1-1] != str2[len2-1]){
        f[len1][len2] = max(findSubsquence(str1.substr(0, len1), str2.substr(0, len2-1)), findSubsquence(str1.substr(0, len1-1), str2.substr(0, len2)));
    }
    else{
        f[len1][len2] = 1 + findSubsquence(str1.substr(0, len1-1), str2.substr(0, len2-1));
    }
    return f[len1][len2];
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        dict.clear();
        string str1, str2;
        cin >> str1 >> str2;
        int maxx = max(str1.length(), str2.length());
        int n = str1.length();
        int m = str2.length();
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                f[i][j] = -1;
            }
        }
        cout << findSubsquence(str1, str2) << endl;
    }
    return 0;
}
