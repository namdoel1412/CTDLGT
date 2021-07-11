#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        int l = str.length();
        int index = l-1;
        while(index >= 0 && str[index] != '1'){
            index--;
        }
        if(index >= 0){
            str[index] = '0';
            for(int i = index+1; i < l; i++){
                str[i] = '1';
            }
            cout << str;
        }
        else{
            for(int i = 0; i < l; i++){
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}
