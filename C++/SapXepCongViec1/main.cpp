#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        vector<pair<int, int> > a;
        cin >> n;
        int s[n+10], e[n+10];
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        for(int i = 0; i < n; i++){
            cin >> e[i];
        }
        for(int i = 0; i < n; i++){
            pair<int, int> tmp = make_pair(s[i], e[i]);
            a.push_back(tmp);
        }
        sort(a.begin(), a.end(), cmp);
        int res = 0, index = 0, edPivot = -1;
        for(int i = 0; i < n; i++){
            if(a[i].first >= edPivot){
                res++;
                //index = i;
                edPivot = a[i].second;
            }
        }
        cout << res << endl;
    }
    return 0;
}
