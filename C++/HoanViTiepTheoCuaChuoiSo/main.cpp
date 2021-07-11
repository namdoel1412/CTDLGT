#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        cin >> n;
        cin >> str;
        int len = str.length();
        int index = len-1;
        while(index > 0 && str[index-1] >= str[index]){
            index--;
        }
        index--;
        if(index == -1){
            cout << n << " " << "BIGGEST";
        }
        else{
            // find the first value that bigger than str[index] from bottom(end) to top(begin)
            int k = len-1;
            while(k > index && str[k] <= str[index]){
                k--;
            }
            swap(str[index], str[k]);
            //cout << index << "  " <<  k << " " << str << endl;
            int l = index+1;
            int r = len-1;
            while(l < r){
                swap(str[l], str[r]);
                l++;
                r--;
            }
            cout << n << " " << str;
        }
        cout << endl;
    }
    return 0;
}
