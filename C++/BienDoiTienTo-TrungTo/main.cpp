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
        stack<string>a;
        int len = str.length();
        for(int i = len-1; i >= 0; i--){
            if(str[i] == '+' || str[i] == '-' || str[i] =='*' || str[i] == '/'){
                string tmp = "(";
                tmp+=a.top();
                a.pop();
                tmp+=str[i];
                tmp+=a.top();
                tmp+=")";
                a.pop();
                a.push(tmp);
            }
            else{
                string tmp2 = "";
                tmp2+=str[i];
                a.push(string()+str[i]);
            }
        }
        cout << a.top() << endl;
    }
    return 0;
}
