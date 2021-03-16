#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int>a, int left, int right, int value){
    if(left <= right){
        int midd = (left+right)/2;
        if(a[midd] == value) return midd;
        else if(a[midd] < value) return BinarySearch(a, midd+1, right, value);
        else return BinarySearch(a, left, midd-1, value);
    }
    else{
        return -1;
    }
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> a;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        int res = BinarySearch(a, 0, a.size()-1, k);
        if(res != -1){
            cout << res+1;
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
