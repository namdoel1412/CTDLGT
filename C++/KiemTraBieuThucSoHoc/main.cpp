#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin, str);
        stack<char>a;
        bool check = true;
        if(str[0]!='(' || str[str.length()-1]!=')'){
            str+=')';
            str='('+str;
        }
        int len = str.length();
        for(int i = 0; i < len; i++){
            if(str[i] == '('){
                a.push(str[i]);
            }
            else if(str[i] == ')'){
                int tmp = 0;
                while(!a.empty() && a.top()!='('){
                    tmp++;
                    a.pop();
                }
                if(tmp < 2){
                    check = false;
                    break;
                }
                if(a.top() == '('){
                    a.pop();
                }
            }
            else{
                a.push(str[i]);
            }
        }
        if(!check){
            cout << "Yes";
        }
        else{
            if(a.empty()){
                cout << "No";
            }
            else{
                cout << "Yes";
            }
        }
        cout << endl;
    }
    return 0;
}
