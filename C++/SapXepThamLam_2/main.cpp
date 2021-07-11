#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+100];
        bool res = true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int leftPivot, rightPivot;
        int tmp = n/2;
        if(n%2==0){
            leftPivot = (a[tmp] > a[tmp-1]) ? a[tmp-1] : a[tmp];
            rightPivot = (a[tmp] > a[tmp-1]) ? a[tmp] : a[tmp-1];
        }
        else{
            leftPivot = a[tmp];
            rightPivot = a[tmp];
        }
        int i = tmp - 1;
        while(i >= 0){
            if(a[i] <= leftPivot && a[n-i-1] >= rightPivot){
                leftPivot = a[i];
                rightPivot = a[n-i-1];
            }
            else if(a[n-i-1] <= leftPivot && a[i] >= rightPivot){
                leftPivot = a[n-i-1];
                rightPivot = a[i];
            }
            else{
                res = false;
                break;
            }
            cout << leftPivot << " " << rightPivot << endl;
            i--;
        }
        if(res) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}
