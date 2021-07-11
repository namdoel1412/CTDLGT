#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    //string a[]
    while(t--){
        cin >> n;
        string str = "1";
        int dem = 0;
        int tmp = 2*n;
        while(tmp>=10){
            dem++;
            tmp/=10;
            str+='0';
        }
        while(true){
            stringstream geek(str);
            //cout << str << " ";
            long long res=0;
            geek >> res;
            if(res%n==0){
                break;
            }
            int len = str.length();
            int k = len-1;
            while(k>=0 && str[k]!='0'){
                k--;
            }
            if(k==-1){
                for(int i = 0; i < len; i++){
                    str[i] = '0';
                }
                str="1"+str;
            }
            else{
                str[k]='1';
                for(int i = k+1; i < len; i++){
                    str[i] = '0';
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}
