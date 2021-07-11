#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int k;
string cmp;
bool compare(string str){
    int len = str.length();
    int dem = 0;
    for(int i = 0; i < len; i++){
        if(str[i]!=cmp[i]){
            dem++;
        }
    }
    if(dem <= 2*k){
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> k;
        cin >> cmp;
        string str = cmp;
        string res = cmp;
        int len = str.length();
        //priority_queue<char> a;
//        for(int i = 0; i < len; i++){
//            a.push(str[i]);
//        }
        while(true){
            int index = len-2;
            while(index >= 0 && str[index] >= str[index+1]){
                index--;
            }
            if(index == -1){
                break;
            }
            else{
                int tmp = len-1;
                while(tmp > index && str[tmp] <= str[index]){
                    tmp--;
                }
                swap(str[index], str[tmp]);
                int l = index+1, r = len-1;
                while(l < r){
                    swap(str[l], str[r]);
                    l++;r--;
                }
            }
            if(compare(str)){
                res = str;
            }
        }
        cout << res << endl;
    }
    return 0;
}
