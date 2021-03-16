#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        int len = str.length();
        // convert posfix to mid
        stack<string>a;
        for(int i = len-1; i >= 0; i--){
            if(str[i]=='-' || str[i]=='+' || str[i]=='*' || str[i]=='/'){
                string tmp = "(";
                tmp+=a.top();
                a.pop();
                tmp+=str[i];
                tmp+=a.top();
                a.pop();
                tmp+=")";
                a.push(tmp);
            }
            else{
                a.push(string()+str[i]);
            }
        }
        //cout << a.top() << endl;

        // convert mid to prefix
        string str2 = a.top();
        int len2 = str2.length();
        stack<char>b;
        for(int i = 0; i < len2; i++){
            if(str2[i]=='('){
                b.push(str2[i]);
            }
            else if(str2[i] == '+' || str2[i] == '-' || str2[i] =='*' || str2[i] == '/'){
                b.push(str2[i]);
            }
            else if(str2[i] == ')'){
                while(!b.empty() && b.top()!='('){
                    cout << b.top();
                    b.pop();
                }
                if(!b.empty() && b.top() == '('){
                    b.pop();
                }
            }
            else{
                cout << str2[i];
            }
        }
        cout << endl;
    }
    return 0;
}
