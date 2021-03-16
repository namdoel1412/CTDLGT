#include <iostream>

using namespace std;

int main()
{
    int t, n, s, m;
    cin >> t;
    while(t--){
        cin >> n >> s >> m;
        bool die = false;
        int res = 0;
        if(n < m){
            die = true;
        }
        else{
            if(s >= 7 && m > 6*(n-m)){
                die = true;
            }
            else{
                res =(m*s)/n;
                if((m*s)%n!=0){
                    res++;
                }
            }
        }
        if(die == true){
            cout << "-1";
        }
        else{
            cout << res;
        }
        cout << endl;
    }
    return 0;
}
