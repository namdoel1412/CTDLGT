#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        int dem = s/7;
        if(n*(s-dem) < s*m){
            cout << "-1";
        }
        else{
            int tong = m*s;
            int res=tong/n;
            if(tong%n==0){
                cout << res;
            }
            else{
                cout << res+1;
            }
        }
        cout << endl;
    }
    return 0;
}
