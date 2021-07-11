#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, e, s;
    while(t--){
        cin >> n >> e >> s;
        int a, b;
        vector<int> vct[n+2];
        for(int i = 0; i < e; i++){
            cin >> a >> b;
            vct[a].push_back(b);
            vct[b].push_back(a);
        }
//        for(int i = 1; i <= n; i++){
//            for(int j = 0; j < vct[i].size(); j++){
//                cout << vct[i][j] << " ";
//            }
//            cout << endl;
//        }
        queue<int> q1;
        q1.push(s);
        int check[n+1] = {0};
        memset(check, 0, sizeof check);
        while(!q1.empty()){
            int tmp = q1.front();
            if(check[tmp] == 0){
                cout << tmp << " ";
                int len = vct[tmp].size();
                check[tmp] = 1;
                //cout << endl << tmp << ": ";
                for(int i = 0; i < len; i++){
                    if(check[vct[tmp][i]] == 0){
                        q1.push(vct[tmp][i]);
                        //cout << vct[tmp][i] << " ";
                    }
                }
                //cout << endl;
            }
            q1.pop();
        }
        cout << endl;
    }
    return 0;
}
