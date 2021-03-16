#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        cout << str << " ";
        while(true){
            int len = str.length();
            int i = len - 1;
            while(i >= 1 && str[i-1]>str[i]){
                i--;
            }
            if(i == 0){
                break;
            }
            else{
                int k=len-1;
                i--;
                while(k>i && str[k]<str[i]){
                    k--;
                }
                swap(str[k], str[i]);
                int l=i+1, r=len-1;
                while(l<r){
                    swap(str[l], str[r]);
                    l++;r--;
                }
                cout << str << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
