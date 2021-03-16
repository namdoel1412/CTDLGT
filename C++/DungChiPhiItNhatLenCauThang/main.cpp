#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[100] = {0};
int trace[100] = {-1};

int FindMinExpenditure(int n){
    if(n == 1) return a[1];
    if(n == 0) return 0;
    if(trace[n] != -1){
        return trace[n];
    }
    else{
        trace[n] = a[n] + min(FindMinExpenditure(n-1), FindMinExpenditure(n-2));
        return trace[n];
    }
}

int main()
{
    int n;
    cin >> n;
    memset(a, 0, sizeof a);
    memset(trace, -1, sizeof trace);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cout << FindMinExpenditure(n+1) << endl;
    return 0;
}
