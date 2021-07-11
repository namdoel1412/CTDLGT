#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tmp, del;
    cin >> n;
    vector<int>a;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> del;
    for(auto i = a.begin(); i != a.end(); ++i){
        if(*i == del){
            a.erase(i);
            i--;
        }
    }
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    return 0;
}
