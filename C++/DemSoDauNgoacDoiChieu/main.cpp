#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        int len = str.length();
        stack<char>a;
        stack<char>b;
        int res = 0;
        for(int i = 0; i < len; i++){
            if(str[i] == '('){
                a.push(str[i]);
            }
            else{
                if(!a.empty() && a.top() == '('){
                    a.pop();
                }
                else{
                    str[i] = '(';
                    a.push('(');
                    res++;
                }
            }
        }
        for(int i = len-1; i >= 0; i--){
            if(str[i] == ')'){
                b.push(str[i]);
            }
            else{
                if(!b.empty() && b.top() == ')'){
                    b.pop();
                }
                else{
                    //str[i] = ')';
                    b.push(')');
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
