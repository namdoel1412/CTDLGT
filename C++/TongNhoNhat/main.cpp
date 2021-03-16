#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a[50];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        string str1 = "", str2 = "";
        for(int i = n-1; i >= 0; i--){
            if(i%2==0){
                str1+=(a[i]+48);
            }
            else{
                str2+=(a[i]+48);
            }
        }
        stringstream ss1(str1);
        stringstream ss2(str2);
        long x = 0;
        ss1 >> x;
        long y = 0;
        ss2 >> y;
        cout << x + y << endl;
    }
    return 0;
}
