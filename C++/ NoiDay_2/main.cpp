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
        priority_queue<long long, vector<long long>, greater<long long> > a;
        int tmp;
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            a.push(tmp);
        }
        long long res = 0;
        for(int i = 0; i < n-1; i++){
            int tmp = a.top();
            a.pop();
            tmp+=a.top();
            a.pop();
            res+=tmp;
            a.push(tmp);
        }
        cout << res << endl;
    }
    return 0;
}
