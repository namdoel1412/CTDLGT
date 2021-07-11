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
        stack<int>a;
        for(int i = len-1; i >= 0; i--){
            if(str[i]=='*' || str[i]=='-' || str[i]=='+' || str[i]=='/'){
                int t1 = a.top();
                a.pop();
                int t2 = a.top();
                a.pop();
                int res = 0;
                if(str[i] == '*'){
                    res = t1*t2;
                }
                else if(str[i] == '-'){
                    res = t1-t2;
                }
                else if(str[i] == '+'){
                    res = t2+t1;
                }
                else if(str[i] == '/'){
                    res = t1/t2;
                }
                a.push(res);
            }
            else{
                a.push(str[i]-'0');
            }
        }
        cout << a.top() << endl;
    }
    return 0;
}
