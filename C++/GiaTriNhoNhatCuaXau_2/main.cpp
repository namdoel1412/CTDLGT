#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cin.ignore();
        string str;
        getline(cin, str);
        int len = str.length();
        //int check[500]={0};
        map<int, int> dict;
        int maxx = -1;
        for(int i = 0; i < len; i++){
            dict[str[i]]++;
        }
        priority_queue<int> q1;
        for(int i = 123; i >= 64; i--){
            if(dict[i] > 0){
                q1.push(dict[i]);
            }
        }
        while(k > 0 && !q1.empty()){
            k--;
            //cout << q1.top() << " ";
            int tmp = q1.top();
            tmp--;
            q1.pop();
            q1.push(tmp);
        }
        long long res = 0;
        while(!q1.empty()){
            res+=pow(q1.top(), 2);
            q1.pop();
        }
        cout << res << endl;
//        for(int i = 0; i < len; i++){
//            cout << dict[str[i]] << " ";
//        }
    }
    return 0;
}
