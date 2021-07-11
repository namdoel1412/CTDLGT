#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> ke[1100];
int n, c, check[1100], trace[1100];

void DFS(int u){
    cout << u << " ";
    int len = ke[u].size();
    for(int i = 0; i < len; i++){
        int dinh = ke[u][i];
        if(!check[dinh]){
            check[dinh] = 1;
            trace[dinh] = u;
            DFS(dinh);
        }
    }
}

//void findtrace(int ){
//
//}


int main()
{
    int t;
    cin >> t;
    while(t--){
        int u;
        cin >> n >> c >> u;
        int a, b;
        memset(check, 0, sizeof check);
        memset(trace, 0, sizeof trace);
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        for(int i = 0; i < c; i++){
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        check[u] = 1;
        DFS(u);
        cout << endl;
    }
    return 0;
}
