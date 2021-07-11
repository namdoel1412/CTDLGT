#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, e, s, t;
        cin >> n >> e >> s >> t;
        int u, v;
        vector<int> vct[n+2];
        for(int i = 0; i < e; i++){
            cin >> u >> v;
            vct[u].push_back(v);
            vct[v].push_back(u);
        }
//        for(int i = 1; i <= n; i++){
//            for(int j = 0; j < vct[i].size(); j++){
//                cout << vct[i][j] << " ";
//            }
//            cout << endl;
//        }
        int truoc[n+2] = {0};
        int check[n+2] = {0};
        memset(check, 0, sizeof check);
        memset(truoc, 0, sizeof truoc);
        stack<int> s1;
        s1.push(s);
        check[s] = 1;
        string res = "";
        res += to_string(s);
        res += " ";
        cout << s << " ";
        int dem = 0;
        while(!s1.empty()){
            int tmp = s1.top();s1.pop();
            int len = vct[tmp].size();
            for(int i = 0; i < len; i++){
                int v = vct[tmp][i];
                if(check[v] == 0){
                    res += to_string(v);
                    res += " ";
                    cout << v << " ";
                    check[v] = 1;
                    truoc[v] = tmp;
                    s1.push(tmp);
                    s1.push(v);
                    if(v == t){
                        dem = 1;
                        break;
                    }
                }
            }
            if(dem == 1) break;
        }
        cout << endl;
        for(int i = 1; i <= n; i++){
            cout << truoc[i] << " ";
        }
        cout << endl;
        if(check[t]) {
            vector<int>a;
            int x = s, y = t;
            while(x != y){
                a.push_back(y);
                y = truoc[y];
            }
            a.push_back(s);
            for(int i = a.size()-1; i>=0; i--){
                cout << a[i] << " ";
            }
        }
        else {
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}
