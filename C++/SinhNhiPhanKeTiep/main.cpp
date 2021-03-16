#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        int len = str.length();
        int index = len;
        for(int j = len - 1; j >= 0; j--){
            if(str[j]=='0'){
                str[j] = '1';
                index = j;
                break;
            }
        }
        if(index != len){
            for(int j = index + 1; j < len; j++){
                str[j] = '0';
            }
            cout << str << endl;
        }
        else{
            for(int j = 0; j < len; j++){
                cout << '0';
            }
            cout << endl;
        }
    }
    return 0;
}
