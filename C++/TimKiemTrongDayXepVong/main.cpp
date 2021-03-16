#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int BinSearch(vector<int> a, int left, int right, int value){
    if(left <= right){
        int midd = (left+right)/2;
        if(a[midd] == value) return midd;
        if(a[midd] > value){
            return BinSearch(a, left, midd-1, value);
        }
        else{
            //left = midd + 1;
            return BinSearch(a, midd+1, right, value);
        }
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
        vector<int>a, b1, b2;
        cin >> n >> k;
        int tmp, tmp2;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        int dem = 0;
        //a.push_back(1e8);
        for(int i = 0; i < n-1; i++){
            if(dem == 0){
                b1.push_back(a[i]);
            }
            else{
                b2.push_back(a[i]);
            }
            if(a[i] >= a[i+1]){
                dem = 1;
            }
        }
        if(dem == 1){
            b2.push_back(a[n-1]);
        }
        else{
            b1.push_back(a[n-1]);
        }
//        for(int i = 0; i < b1.size(); i++){
//            cout << b1[i] << " ";
//        }
//        cout << endl;
//        for(int i = 0; i < b2.size(); i++){
//            cout << b2[i] << " ";
//        }
        int res1 = BinSearch(b1, 0, b1.size()-1, k);
        if(res1 != -1){
            cout << res1 + 1;
        }
        else{
            int res2 = BinSearch(b2, 0, b2.size()-1, k);
            cout << b1.size() + res2 + 1;
        }
        cout << endl;
    }
    return 0;
}
