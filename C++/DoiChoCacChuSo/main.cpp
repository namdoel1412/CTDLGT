#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    while(t--){
        int n;
        cin >> k;
        string str;
        cin >> str;
        int len = str.length();
        priority_queue<char> a;
        for(int i = 0; i < len; i++){
            a.push(str[i]);
        }
        int index = len-1;
        int pivot = 0;
        for(int i = 0; i < k; i++){
            //cout << a.top() << " ";
            // swap a.top() with the first -> .. in str
            // vi no da duoc swap len dau dau => nen ko can phai thuc hien check
            int index = len-1;
            while(index >= 0 && !a.empty() && str[index] != a.top()){
                index--;
            }
            //check[index]=1;
            pivot = 0;
            while(pivot < len && !a.empty() && str[pivot] >= a.top()){
                pivot++;
            }
            //if(pivot == len) continue;
            //cout << a.top() << " " << index << " " << pivot << endl;
            //index--;
            if(pivot < len && index > pivot && str[index] > str[pivot]){
                swap(str[index], str[pivot]);
                if(!a.empty()){
                    a.pop();
                    pivot++;
                }
                else{
                    break;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}
