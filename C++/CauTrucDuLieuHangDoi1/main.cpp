#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        queue<int> q1;
        cin >> n;
        int state;
        while(n--){
            cin >> state;
            if(state == 1){
                cout << q1.size();
            }
            else if(state == 2){
                cout << (q1.empty() ? "YES" : "NO");
            }
            else if(state == 3){
                int tmp;
                cin >> tmp;
                q1.push(tmp);
            }
            else if(state == 4){
                if(!q1.empty()) q1.pop();
            }
            else if(state == 5){
                if(q1.empty()){
                    cout << "-1";
                }
                else{
                    cout << q1.front();
                }
            }
            else if(state == 6){
                if(q1.empty()){
                    cout << "-1";
                }
                else{
                    cout << q1.back();
                }
            }
            cout << endl;
        }
    }
    return 0;
}
