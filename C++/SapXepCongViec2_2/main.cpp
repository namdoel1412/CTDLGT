#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct job{
    int id, fi, se;
};

bool cmp(job a, job b){
    return a.se > b.se;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        job a[n+5];
        for(int i = 0; i < n; i++){
            cin >> a[i].id >> a[i].fi >> a[i].se;
        }
        sort(a, a+n, cmp);
        int dem = 0, res = 0;
        int check[1100]={0};
        memset(check, 0, sizeof check);
        for(int i = 0; i < n; i++){
            while(a[i].fi > 0 && check[a[i].fi]) a[i].fi-=1;
            if(a[i].fi > 0 && !check[a[i].fi]){
                dem++;
                res+=a[i].se;
                check[a[i].fi] = 1;
            }
        }
        cout << dem << " " << res << endl;
    }
    return 0;
}
