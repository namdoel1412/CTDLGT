#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int>ke[1100];
int n, c, check[1100]={0};

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first > b.first){
        return 1;
    }
    else if(a.first == b.first){
        return a.second < b.second;
    }
    return 0;
}

void DFS(vector<int>exec[], int u){
    int len = exec[u].size();
    for(int i = 0; i < len; i++){
        int dinh = exec[u][i];
        if(!check[dinh]){
            check[dinh]=1;
            DFS(exec, dinh);
        }
    }
}

void BFS(vector<int>exec[], int u){
    queue<int> q1;
    q1.push(u);
    check[u] = 1;
    while(!q1.empty()){
        int v = q1.front();
        q1.pop();
        int len = exec[v].size();
        for(int i = 0; i < len; i++){
            int dinh = exec[v][i];
            if(!check[dinh]){
                check[dinh] = 1;
                q1.push(dinh);
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
        int a, b;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        vector<pair<int, int> > edges;
        vector<int> ke_2[n+10];
        for(int i = 0; i < c; i++){
            cin >> a >> b;
            edges.push_back({a, b});
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
//        for(int i = 0; i < c; i++){
//            cout << edges[i].first << " " << edges[i].second << endl;
//        }
        int stplt = 0;
        memset(check, 0, sizeof check);
        for(int i = 1; i <= n; i++){
            if(!check[i]){
                BFS(ke, i);
                stplt++;
            }
        }
        //cout << stplt << endl;
        int res = 0;
        for(int i = 0; i < c; i++){
            // reinit mang danh dau check
            memset(check, 0, sizeof check);
            // reinit array vector ke_2
            for(int j = 1; j <= n; j++){
                ke_2[j].clear();
            }
            // xet tung thanh phan trong mang danh sach ke_2
            for(int j = 0; j < c; j++){
                if(j!=i){
                    ke_2[edges[j].first].push_back(edges[j].second);
                    ke_2[edges[j].second].push_back(edges[j].first);
                }
            }
//            for(int j = 1; j <= n; j++){
//                int l = ke_2[j].size();
//                for(int k = 0; k < l; k++){
//                    cout << ke_2[j][k] << " ";
//                }
//                cout << endl;
//            }
            int dem = 0;
            for(int j = 1; j <= n; j++){
                if(!check[j]){
                    BFS(ke_2, j);
                    dem++;
                }
            }
            if(stplt < dem){
                res++;
                if(edges[i].first > edges[i].second){
                    cout << edges[i].second << " " << edges[i].first << " ";
                }
                else{
                    cout << edges[i].first << " " << edges[i].second << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
