#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1100];
int n, c, check[1100]={0};

void BFS(int u){
    queue<int> q1;
    q1.push(u);
    check[u] = 1;
    while(!q1.empty()){
        int v = q1.front();
        q1.pop();
        int len = ke[v].size();
        for(int i = 0; i < len; i++){
            int dinh = ke[v][i];
            if(!check[dinh]){
                q1.push(dinh);
                check[dinh] = 1;
            }
        }
    }
}

int demSoTPLT(){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            BFS(i);
            dem++;
        }
    }
    return dem;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        memset(check, 0, sizeof check);
        int a, b;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        for(int i = 0; i < c;i++){
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int stplt = demSoTPLT();
        //cout << stplt << endl;
        int res = 0;
        for(int i = 1; i <= n; i++){
            memset(check, 0, sizeof check);
            check[i] = 1;
            int tmp2 = demSoTPLT();
            if(tmp2 > stplt){
                res++;
                cout << i << " ";
            }
        }
        cout << endl;
        //cout << res << endl;
    }
    return 0;
}
