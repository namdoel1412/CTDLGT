#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n+100];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long maxx = -1e9-7;
        for(int i = 0; i < n; i++){
            if(a[i]*n < maxx) continue;
            int leftPivot = i-1, rightPivot = i+1;
            while(leftPivot >= 0 && a[leftPivot] >= a[i]){
                leftPivot--;
            }
            while(rightPivot < n && a[rightPivot] >= a[i]){
                rightPivot++;
            }
            // Lưu ý: phải ép kiểu long long -> vì biểu thức có thể vượt qua int nếu ko ép kiểu long long
            long long res = (long long)((i-leftPivot) + (rightPivot-i) - 1)*a[i];
            //cout << res << " ";
            if(maxx < res) maxx = res;
        }
        cout << maxx << endl;
    }
    return 0;
}
