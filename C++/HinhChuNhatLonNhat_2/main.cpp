#include <iostream>
#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n+100];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long maxx = -1e9-7;
        stack<int>left, right;
        vector<int>traceLeft, traceRight;
        traceLeft.resize(n, -1);
        traceRight.resize(n, n);
        left.push(0);
        right.push(n-1);
        for(int i = 0; i < n; i++){
            //if(a[i]*n < maxx) continue;
            while(!left.empty() && a[left.top()] >= a[i]){
                left.pop();
            }
            if(left.empty()){
                traceLeft[i] = -1;
            }
            else{
                traceLeft[i] = left.top();
            }
            left.push(i);
        }
        for(int i = n-1; i >= 0; i--){
            //if(a[i]*n < maxx) continue;
            while(!right.empty() && a[right.top()] >= a[i]){
                right.pop();
            }
            if(right.empty()){
                traceRight[i] = n;
            }
            else{
                traceRight[i] = right.top();
            }
            right.push(i);
        }
        for(int i = 0; i < n; i++){
            long long res = (long long)((i-traceLeft[i]) + (traceRight[i]-i) - 1)*a[i];
            if(maxx < res) maxx = res;
        }

        cout << maxx << endl;
    }
    return 0;
}
