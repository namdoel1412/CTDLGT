#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, m, n, k;
    vector<int> vect;
    cin >> t;
    while(t--){
        cin >> m >> n >> k;
        int sum = m+n;
        int tmp;
        for(int i = 0; i < sum; i++){
            cin >> tmp;
            vect.push_back(tmp);
        }
        sort(vect.begin(), vect.end());
//        for(int i = 0; i < sum; i++){
//            cout << vect[i] << " ";
//        }
        cout << vect[k-1] << endl;
        vect.clear();
    }
    return 0;
}
