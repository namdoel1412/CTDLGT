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
        vector<int> bacTrong[n+10];
        vector<int> bacNgoai[n+10];
        for(int i = 0; i < c; i++){
            cin >> a >> b;
            bacTrong[b].push_back(a);
            bacNgoai[a].push_back(b);
        }
        int balance = 0, condi1 = 0, condi2 = 0;
        for(int i = 1; i <= n; i++){
            int in = bacTrong[i].size();
            int out = bacNgoai[i].size();
            if(in == out){
                balance++;
            }
//            else{
//                if(in = out + 1){
//                    condi1++;
//                }
//                else if(out = in + 1){
//                    condi2++;
//                }
//            }
        }
        if(balance == n){
            cout << 1;
        }
        else{
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
