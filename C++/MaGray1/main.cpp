#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1){
            cout << "0 1" << endl;
        }
        else{
            vector<string> a, b;
            a.push_back("0");
            a.push_back("1");
            for(int i = 2; i <= n; i++){
                int lena = a.size();
                // reverse a and set that to b
                b.clear();
                for(int j = lena-1; j >= 0; j--){
                    b.push_back(a[j]);
                }
                int lenb = b.size();
                // Them 0 vao truoc a[i]
                for(int j = 0; j < lena; j++){
                    a[j]="0"+a[j];
                }
                // Them 1 vao truoc b[i]
                for(int j = 0; j < lenb; j++){
                    b[j]="1"+b[j];
                }

                for(int j = 0; j < lenb; j++){
                    a.push_back(b[j]);
                }
            }
            for(int i = 0; i < a.size(); i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
