#include <iostream>

using namespace std;

int main()
{
    int t, n, a[120]={0}, values[120]={0};
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        // Values[] - Quyết định rằng với tổng liên tiếp hiện tại có tiếp tục nhận thêm giá trị hay ko
        // Chỉ khi value > 0 -> tức khi ấy nếu nhận thêm giá trị, dãy có thể tiếp tục tăng.
        // Khi value <= 0 -> tức khi nhận thêm giá trị, dãy ko thể tăng hơn so với giá trị sau đó
        values[1] = a[1];
        int maxx = -1e9;
        for(int i = 2; i <=n; i++){
            // Trường hợp có thể sẽ tìm được tổng liên tiếp lớn hớn -> chờ
            if(a[i] + values[i-1] > 0){
                values[i] = a[i] + values[i-1];
            }
            else{ // Trường hợp nếu <= 0, dù có tổng thế nào thì a[i] + value[i-1] cũng nhỏ hơn maxx
                values[i] = 0;
            }

        // Mỗi khi thay đổi giá trị bằng maxx, gán giá trị value[i] tương ứng. Vì tại điểm đó ta có thể chờ giá trị lớn hơn
        // khi vòng lặp tiếp tục chạy đến cuối dãy.
            if(a[i] > maxx){
                maxx = a[i];
                if(maxx > 0){
                    values[i] = maxx;
                }
            }
            if(a[i] + values[i-1] > maxx){
                maxx = a[i] + values[i-1];
                if(maxx > 0){
                    values[i] = maxx;
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}
