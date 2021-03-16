#include <iostream>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    int a[10000];
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        int index = k+1;
        for(int i = k; i >= 1; i--){
            if(a[i] != n-k+i){
                index = i;
                break;
            }
        }
        if(index != k+1){
            a[index]++;
            for(int i = index+1; i <= k; i++){
                a[i] = a[index]+i-index;
            }
            for(int i = 1; i <= k; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else{
            for(int i = 1; i <= k; i++){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
