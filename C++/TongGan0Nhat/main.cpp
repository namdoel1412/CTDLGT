#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        int a[2000];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = 1e9;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j!=i){
                    if(abs(a[i]+a[j]) < abs(res)){
                        res = a[i] + a[j];
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
