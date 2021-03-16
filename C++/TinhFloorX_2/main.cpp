#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool mycompareForSearch (ll i, ll j) {
  return (i<=j);
}

struct anothercmp{
    bool operator() (ll i, ll j) {
        return i<=j;
    }
};

bool sortDec(const pair<ll, ll> &a, const pair<ll, ll> &b){
    return a.second > b.second;
}

int main()
{
    priority_queue<int, vector<int>, anothercmp > tm;
    ios::sync_with_stdio(false);
    int t, n;
    ll x;
    cin >> t;
    //long long a[10000000];
    //vector< pair<int, int> > vect;
    vector<ll> vect;
    while(t--){
        cin >> n >> x;
        vector<ll> vect2;
        vect2.push_back(x);
        map< ll, int > dictionary;
        long long tmp;
        for(int i = 1;i <= n; i++){
            //cin >> n
            cin >> tmp;
            dictionary.insert(make_pair(tmp, i));
            vect.push_back(tmp);
        }
        vector<ll>::iterator it;
        int res = -1;
        sort(vect.begin(), vect.end(), greater<ll>() );
//        for(int i = 0;i < n; i++){
//            //cin >> n
//            cout << vect[i].first << " " << vect[i].second << endl;
//        }
//        it = search(vect.begin(), vect.end(), vect2.begin(), vect2.end(), mycompareForSearch);
//        if(it != vect.end()){
//            cout << dictionary[*it];
//        }
//        else{
//            cout << "-1";
//        }
        for(int i = 0; i < n; i++){
            if(vect[i] <= x){
                res = vect[i];
                break;
            }
        }
        if(res != -1){
            cout << dictionary[res];
        }
        else{
            cout << "-1";
        }
        cout << endl;
        vect.clear();
    }
    return 0;
}
