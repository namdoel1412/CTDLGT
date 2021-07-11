#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> ke[1000];
int truoc[1000]={0};
int check[1000]={0};

void DFS(int s, int e){
    if(check[s]){
        return;
    }
    check[s]=1;
    int len = ke[s].size();
    for(int i = 0; i < len; i++){
        if(check[ke[s][i]] == 0){
            truoc[ke[s][i]] = s;
            DFS(ke[s][i], e);
        }
    }
}

void Trace(int u, int v){
    if(check[v] == 0) {
        cout << "-1" << endl;
        return;
    }
    vector<int>a;
    while(u != v){
        a.push_back(v);
        v = truoc[v];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, e, s, t;
        cin >> n >> e >> s >> t;
        memset(check, 0, sizeof check);
        memset(truoc, 0, sizeof truoc);
        int u, v;
        for(int i = 0; i < e; i++){
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(s, t);
        Trace(s, t);
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
    }
    return 0;
}
