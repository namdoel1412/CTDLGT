#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int>&a, const pair<int, int>&b){
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int tmp;
        vector<int> a, b;
        vector<pair<int, int> > vct;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i = 0; i < n; i++){
            cin >> tmp;
            b.push_back(tmp);
        }
        for(int i = 0; i < n; i++){
            vct.push_back(make_pair(a[i], b[i]));
        }

        sort(vct.begin(), vct.end(), cmp);
        int res = 1;
        int minn = 0;
        int k = 0;
        for(int i = 1; i < n; i++){
            // cout << vct[i].first << " " << vct[i].second << endl;
            if(vct[k].second <= vct[i].first){
                //cout << vct[i].first << " " << vct[i].second << endl;
                // minn = vct[i].second;
                k=i;
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
