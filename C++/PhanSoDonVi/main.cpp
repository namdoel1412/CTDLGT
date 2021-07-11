#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> res;
void Try(double p, double q){
    int tmp = 1;
    while(double(1/(double)tmp) > double(p/q)){
        tmp++;
    }
    res.push_back(tmp);
    //cout << (double)(p/q) << endl;
    if(p == 1 && q == tmp){
        return;
    }
    else{
        Try(p*tmp-q, q*tmp);
    }
}

int main()
{
    int t, p, q;
    cin >> t;
    while(t--){
        res.clear();
        cin >> p >> q;
        int nguyen = p/q;
        int mod = p%q;
        if(mod == 0){
            for(int i = 0; i < nguyen - 1; i++){
                cout << "1\/1" << " + ";
            }
            cout << "1/1";
        }
        else{
            Try(mod, q);
            int len = res.size();
            for(int i = 0; i < nguyen; i++){
                for(int j = 0; j < len; j++){
                    res.push_back(res[j]);
                }
            }
            sort(res.begin(), res.end());
            len = res.size()-1;
            for(int i = 0; i < len; i++){
                cout << "1\/" << res[i] << " + ";
            }
            cout << "1\/" << res[len];
        }
        cout << endl;
    }
    return 0;
}
