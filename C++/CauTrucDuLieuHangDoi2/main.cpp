#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    queue<int>a;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        if(str == "PUSH"){
            int tmp;
            cin >> tmp;
            a.push(tmp);
        }
        else if(str == "POP"){
            if(!a.empty()){
                a.pop();
            }
        }
        else if(str == "PRINTFRONT"){
            if(!a.empty()){
                cout << a.front() << endl;
            }
            else{
                cout << "NONE" << endl;
            }
        }

    }
    return 0;
}
