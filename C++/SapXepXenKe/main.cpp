#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[10000];
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a+1, a+n+1, greater<int>() );
        int left = 1, right = n;
        while(left <= right){
            if(left == right){
                cout << a[left] << " ";
            }
            else{
                cout << a[left] << " " << a[right] << " ";
            }
            left++;right--;
        }
        cout << endl;
    }
    return 0;
}
