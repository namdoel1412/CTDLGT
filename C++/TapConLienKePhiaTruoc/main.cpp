#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ý tưởng: tìm index đầu tiên có khoảng cách với phần tử trước nó khác 1.
    int t, k, n;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[1200]={0};
        memset(a, 0, sizeof a);
        a[0] = 0;
        for(int i = 1; i <= k; i++){
            //a[i] = i;
            cin >> a[i];
        }
        int index = k;
        while(index > 0 && a[index]-a[index-1] == 1){
            index--;
        }
        if(index == 0){
            for(int i = 1; i <= k; i++){
                cout << n+i-k << " ";
            }
        }
        else{
            a[index]--;
            for(int i = k; i >= index+1; i--){
                // gán lại các giá trị sau phần tử có khoảng cách khác 1. Là những ptu có giá trị = n-k+i.
                a[i] = n-k+i;
            }
            for(int i = 1; i <= k; i++){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
