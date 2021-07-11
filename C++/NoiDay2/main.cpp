#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const long MOD = 1000000007;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long>a;
        long tmp;
        priority_queue<long, vector<long>, greater<long> >q1;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            q1.push(tmp);
        }
        long res = 0;
        while(q1.size() > 1){
            long tmp = q1.top()%MOD;
            q1.pop();
            long tmp2 = q1.top()%MOD;
            q1.pop();
            res=(res%MOD+(tmp+tmp2)%MOD)%MOD;
            q1.push((tmp+tmp2)%MOD);
        }
        cout << res%MOD << endl;
    }
    return 0;
}
