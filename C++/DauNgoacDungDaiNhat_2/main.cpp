#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    //cin.ignore();
    string str;
    while(t--){
        //getline(cin,str);
        cin >> str;
        stack<int> stk;
        int len = str.length();
        int dem = 0;
        int maxx = 0;
        stk.push(-1);
        for(int i = 0; i < len; i++){
            if(str[i] == '('){
                stk.push(i);
            }
            else if(str[i] == ')'){
                stk.pop();
                if(stk.size() > 0){
                    maxx = max(maxx, i-stk.top());
                }
                else{
                    stk.push(i);
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}
