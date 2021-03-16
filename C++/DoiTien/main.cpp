#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int minn = 1e9+7;
int currency[100] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int a[100]={100000000};
int Try(int n, int dem){
    if(n == 0){
        //minn = min(minn, dem);
        return dem;
    }
    if(n < 0){
        return 1e9+7;
    }
    //if(dem < minn){
        for(int i = 0; i <= 9; i++){
            if(n - currency[i] >= 0){
                a[i] = Try(n-currency[i], dem+1);
            }
        }
        return *min_element(a, a + 9);
    //}
    //else{
    //    return 1e9+7;
    //}
}


int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
//        for(int i = 0; i <= 9; i++){
//            //if(n - currency[i] >= 0){
//            cout << currency[i] << " ";
//            //}
//        }
        cout << Try(n, 0) << endl;
        //cout << minn << endl;
    }
    return 0;
}
