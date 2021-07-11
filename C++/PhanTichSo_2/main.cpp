#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Print(int a[]){
    int i = 1;
    string res = "";
    res+="(";
    while(a[i] != 0){
        res+=to_string(a[i]);
        res+=" ";
        i++;
    }
    res.erase(res.length() - 1, 1);
    res+=")";
    cout << res << " ";
}

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int tmp = n;
        int a[n+5] = {0};
        memset(a, 0, sizeof a);
        a[1] = n;
        Print(a);
        while(true){
            int index = n;
            while(index >= 1 && a[index] == 0){
                index--;
            }
            int dem = 0;
            while(index >= 1 && a[index] == 1){
                index--;
                dem++;
            }
            if(index != 0){
                a[index]--;
                dem++;
                int div = dem/a[index];
                int mod = dem%a[index];
                int divLoop = index+div;
                //int modLoop = index+mod;
                for(int i = index+1; i <= divLoop; i++){
                    a[i] = a[index];
                }
                a[divLoop+1] = mod;
                for(int i = divLoop+2; i <= n;i++){
                    a[i]=0;
                }
                Print(a);
            }
            else{
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
