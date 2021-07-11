#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int>ke[1100];
int n, c, check[1100] = {0};
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
        int n, c;
        cin >> n >> c;
        int a, b;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
        }
        memset(check, 0, sizeof check);
        for(int i = 0; i < c; i++){
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int dem = 1;
//        for(int i = 1; i <= n; i++){
//            if(!check[i]){
//                BFS(i);
//                dem++;
//            }
//        }
        if(dem == 1){
            int oddLevel = 0, evenLevel = 0;
            for(int i = 1; i <= n; i++){
                if(ke[i].size()%2 == 0){
                    evenLevel++;
                }
                else{
                    oddLevel++;
                }
            }
            if(evenLevel == n){
                cout << 2;
            }
            else if(oddLevel == 2){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
        else{
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
