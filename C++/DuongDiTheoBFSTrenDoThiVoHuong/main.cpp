#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> a[1200];
int check[1200]={0};
string res = "";
int trace[1200]={0};

void BFS(int u, int v){
    queue<int>q1;
    q1.push(u);
    check[u] = 1;
    while(!q1.empty()){
        int pivot = q1.front();
        q1.pop();
        res+=to_string(pivot);
        res+=" ";
        if(pivot == v){
            break;
        }
        int len = a[pivot].size();
        for(int i = 0; i < len; i++){
            if(!check[a[pivot][i]]){
                q1.push(a[pivot][i]);
                check[a[pivot][i]] = 1;
                trace[a[pivot][i]] = pivot;
            }
        }
    }
}

void findTrace(int u, int v){
    vector<int>res;
    if(trace[v] != 0){
        while(v!=u){
            res.push_back(v);
            v = trace[v];
        }
        res.push_back(u);
        int len = res.size();
        for(int i = len-1; i>=0; i--){
            cout << res[i] << " ";
        }
    }
    else{
        cout << "-1";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    int n, e, u, v;
    while(t--){
        memset(check, 0, sizeof check);
        memset(trace, 0, sizeof trace);
        cin >> n >> e >> u >> v;
        int x, y;
        for(int i = 1; i <= n; i++){
            a[i].clear();
        }
        for(int i = 0; i < e ;i++){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(u, v);
        if(check[v]){
            findTrace(u, v);
        }
        else{
            cout << "-1" << endl;
        }
        //findTrace(u, v);
    }
    return 0;
}
