#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        stack<int> s;
        vector<int> res;
        s.push(a[n-1]);
        for(int i = n-1; i >=0 ;i--){
            while(!s.empty() && s.top() <= a[i]){
                s.pop();
            }
            if(s.empty()){
                res.push_back(-1);
            }
            else{
                res.push_back(s.top());
            }
            s.push(a[i]);
        }
        for(int i = n-1; i >=0 ;i--){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
