#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    //cout << dictionary[5] << endl;
    //cout << dictionary.count(5);
    vector<int> hop;
    vector<int> giao;
    while(t--){
        cin >> n >> m;
        int tmp = n+m;
        int tmp2;
        map<int, int> dictionary;
        for(int i = 0; i < tmp; i++){
            cin >> tmp2;
            if(!dictionary.count(tmp2)){
                hop.push_back(tmp2);
                dictionary.insert(make_pair(tmp2, 1));
            }
            else{
                giao.push_back(tmp2);
            }
        }
        int lHop = hop.size();
        int lGiao = giao.size();
        sort(hop.begin(), hop.end());
        sort(giao.begin(), giao.end());
        for(int i = 0; i < lHop; i++){
            cout << hop[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < lGiao; i++){
            cout << giao[i] << " ";
        }
        cout << endl;
        hop.clear();
        giao.clear();
        //for(int i = 0; )
    }
    return 0;
}
