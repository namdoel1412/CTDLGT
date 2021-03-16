#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        priority_queue<int, vector<int>, greater<int> > priorQueue;
        //priority_queue<int, vector<int>, compare> cmpPrior;
        cin >> n;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            priorQueue.push(tmp);
        }
        long res = 0, tmp2 = 0;
        for(int i = 0; i < n-1; i++){
            tmp2+=priorQueue.top();
            priorQueue.pop();
            tmp2+=priorQueue.top();
            priorQueue.pop();
            priorQueue.push(tmp2);
            res+=tmp2;
            tmp2 = 0;
        }
        cout << res << endl;
    }
    return 0;
}
