#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    stack<int> a;
    int t;
    while(cin >> str){
        if(str == "push"){
            cin >> t;
            a.push(t);
        }
        else if(str == "pop"){
            if(!a.empty()){
                a.pop();
            }
        }
        else if(str == "show"){
            stack<int> res;
            if(!a.empty()){
                while(!a.empty()){
                    res.push(a.top());
                    a.pop();
                }
                while(!res.empty()){
                    cout << res.top() << " ";
                    a.push(res.top());
                    res.pop();
                }
            }
            else{
                cout << "empty";
            }
            cout << endl;
        }

    }
    return 0;
}
