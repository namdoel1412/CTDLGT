#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    deque<int>a;
    while(t--){
        cin >> str;
        int tmp;
        if(str == "PUSHFRONT"){
            cin >> tmp;
            a.push_front(tmp);
        }
        else if(str == "PUSHBACK"){
            cin >> tmp;
            a.push_back(tmp);
        }
        else if(str == "PRINTFRONT"){
            if(!a.empty()){
                cout << a.front();
            }
            else{
                cout << "NONE";
            }
        }
        else if(str == "PRINTBACK"){
            if(!a.empty()){
                cout << a.back();
            }
            else{
                cout << "NONE";
            }
        }
        else if(str == "POPFRONT"){
            if(!a.empty()){
                a.pop_front();
            }
        }
        else if(str == "POPBACK"){
            if(!a.empty()){
                a.pop_back();
            }
        }
        cout << endl;
    }
    return 0;
}
