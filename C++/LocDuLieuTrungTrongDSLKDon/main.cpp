#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> dict;
    int n, tmp;
    vector<int>a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < n; i++){
        if(dict.count(a[i]) == 0){
            cout << a[i] << " ";
            dict[a[i]]++;
        }
    }
    return 0;
}
