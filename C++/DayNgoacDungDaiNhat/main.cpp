#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string str;
    while(t--){
        getline(cin,str);
        stack<char> stk;
        int len = str.length();
        int dem = 0;
        int maxx = 0;
//        for(int i = 0; i < len; i++){
//            if(str[i] == '('){
//                if(!stk.empty() && stk.top() == ')'){
//                    dem = 0;
//                }
//                stk.push(str[i]);
//            }
//            else if(str[i] == ')'){
//                if(!stk.empty() && stk.top() == '('){
//                    stk.pop();
//                    dem+=2;
//                    if(maxx < dem){
//                        maxx = dem;
//                    }
//                }
//                else{
//
//                    dem = 0;
//                }
//            }
//        }
        if(str == "") cout << "0" << endl;
        else{
                for(int i = 0; i < len; i++){
            if(stk.empty()){
                if(str[i] == ')')
                {
                    dem = 0;
                }
                else{
                    stk.push(str[i]);
                }
            }
            else if(stk.top() == '('){
                if(str[i] == ')'){
                    dem+=2;
                    if(maxx < dem){
                        maxx = dem;
                    }
                    stk.pop();
                }
                else if(str[i] == '('){
                    stk.push(str[i]);
                }
            }
            else if(stk.top() == ')'){
                if(str[i] == ')'){
                    dem = 0;
                    stk.pop();
                }
                else if(str[i] == '('){
                    dem = 0;
                    stk.pop();
                    stk.push(str[i]);
                }
            }
        }
        cout << maxx << endl;
        }
    }
    return 0;
}
