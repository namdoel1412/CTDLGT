#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<int> ke[1100];
    int a, b;
    for(int i = 1; i <= n; i++){
        ke[i].clear();
    }
    int tmp;
    for(int i = 1; i <= n; i++){
        string line;
        getline(cin, line);
        istringstream is(line);
        int n;
        while(is >> n){
            ke[i].push_back(n);
        }
    }
    for(int i = 1; i <= n; i++){
        int len = ke[i].size();
        for(int j = 0; j < len; j++){
            if(ke[i][j] > i){
                cout << i << " " << ke[i][j] << endl;
            }
        }
    }
    return 0;
}
