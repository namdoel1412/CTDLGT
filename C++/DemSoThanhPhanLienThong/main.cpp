#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> a[1100];
int check[1100]={0};

void BFS(int u){
    queue<int>q1;
    q1.push(u);
    check[u]=1;
    while(!q1.empty()){
        int pivot = q1.front();
        q1.pop();
        int len = a[pivot].size();
        for(int i = 0; i < len; i++){
            int tmp = a[pivot][i];
            if(!check[tmp]){
                q1.push(tmp);
                check[tmp] = 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, e;
        cin >> n >> e;
        int x, y;
        memset(check, 0, sizeof check);
        for(int i = 1; i <= n; i++){
            a[i].clear();
        }
        for(int i = 0; i < e; i++){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int res = 0;
        for(int i = 1; i <= n; i++){
            if(!check[i]){
                BFS(i);
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
