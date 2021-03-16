#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x;
    cin >> t;
    string str;
    stack<int> a;
    while(t--){
        cin >> str;
        if(str == "PUSH"){
            cin >> x;
            a.push(x);
        }
        else if(str == "POP"){
            if(!a.empty()){
                a.pop();
            }
        }
        else if(str == "PRINT"){
            if(!a.empty()){
                cout << a.top();
            }
            else{
                cout << "NONE";
            }
        }
        cout << endl;
    }
    return 0;
}
