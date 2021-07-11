#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        int len = str.length();
        long long res = 0;
//        if(len == 1){
//            if(str=="0") cout << "0";
//            else cout << "1";
//            cout << endl;
//            continue;
//        }
        //res = pow(2, len-1)-1;
        //int i = 0;
        //Note: sẽ không tính trường hợp tất cả bằng 0.
        for(int i = 0; i < len; i++){
            // Trường hợp tại vị trí i có str[i] lớn hơn 1 -> nhận hết giá trị đó - chỉ trừ giá trị tất cả bằng 0
            if(str[i] > '1'){
                res+=pow(2, len-i)-1;
                break;
            }
            else if(str[i] == '1'){
                // Trường hợp tại vị trí i có str[i] bằng 1 -> nhận hết giá trị nhỏ hơn và "bằng" nó
                // ví dụ: 10100 -> với i = 2 có str[i]=1, ta nhận các giá trị 1->1111 và 10000, tương tự 100: 1->11 và 100
                res+=pow(2, len-i-1);
            }
        }
        cout << res << endl;
    }
    return 0;
}
