#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1100];
int n, c, check[1100]={0};
int res = false;

void BFS(int u, int index){
    queue<int> q1;
    q1.push(u);
    check[u] = u;
    while(!q1.empty()){
        int tmp = q1.front();
        q1.pop();
        int len = ke[tmp].size();
        for(int i = 0; i < len; i++){
            int dinh = ke[tmp][i];
            if(check[dinh] == 0){
                q1.push(dinh);
                check[dinh] = tmp;
            }
            else if(check[dinh] != 0 && check[tmp] != dinh){
                //cout << tmp << " " << dinh << endl;
                res = true;
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        res = false;
        memset(check, 0, sizeof check);
        int a, b;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        for(int i = 0; i < c; i++){
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int dem = 1;
        for(int i = 1; i <= n; i++){
            if(check[i] == 0){
                BFS(i, dem);
            }
        }
        if(res == true){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
