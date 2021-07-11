#include <iostream>

using namespace std;

int n;

bool checkRes(string str){
    if(str[0] == 'H' && str[n-1] == 'A'){
        for(int i = 0; i < n-2; i++){
            if(str[i] == 'H' && str[i+1] == 'H') return false;
        }
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        string str = "";
        for(int i = 0; i < n; i++){
            str+='A';
        }
        while(true){
            int index = n-1;
            if(checkRes(str)){
                cout << str << endl;
            }
            while(index >= 0 && str[index] != 'A'){
                index--;
            }
            if(index == -1){
                if(checkRes(str)){
                    cout << str << endl;
                }
                break;
            }
            str[index] = 'H';
            int i = index+1;
            while(i < n){
                str[i] = 'A';
                i++;
            }
        }
    }
    return 0;
}
