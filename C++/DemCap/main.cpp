#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int>a, b;

bool compare(int x, int y){
    return
}

int main()
{
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int tmp;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i = 0; i < m; i++){
            cin >> tmp;
            b.push_back(tmp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int>::iterator it;
        int res = 0;
        for(int i = 0; i < n; i++){
            it = search(b.begin(), b.end(), a.begin()+i+1, a.begin()+i+2, compare);
            search()
        }

    }
    return 0;
}
