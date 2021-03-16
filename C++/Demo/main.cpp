#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct example
{
    int x;
    vector<ll> currency;
};

struct our_cmp
{
    bool operator() ( example a, example b ) const
    { return std::make_pair(a.x, a.currency) > std::make_pair(b.x, b.currency) ; }
};

std::map< example, int, our_cmp > something;

ll minn = 1e9;

ll DemTien(int n, vector<ll>tmp, int dem){
    if(n == 0) return dem;
    if(n < 0) return 1e9;
    if(tmp.size() == 0 && n > 0) return 1e9;
    example variable = { n,  tmp};
    //cout << something.count(variable) << " ";
    if(something.count(variable) != 0){
        //cout << something.count(variable) << endl;
        return dem + something[variable];
    }
    else{
        if(dem > minn) return 1e9;
        if(dem + n/tmp[tmp.size()-1] > minn) return 1e9;
        vector<ll> tmp2 = tmp;
        tmp2.erase(tmp2.begin());
        int recurRes = min(DemTien(n - tmp[0], tmp, dem+1), DemTien(n, tmp2, dem));
        something[variable] = recurRes - dem;
        return recurRes;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int m, n;
        vector<ll> a;
        cin >> m >> n;
        ll tmp;
        for(int i = 0; i < m; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end(), greater<ll>() );
        ll res = DemTien(n, a, 0);
        if(res == 1e9){
            cout << "-1";
        }
        else{
            cout << res;
        }
        cout << endl;
    }
}
