#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, p, s;
bool checkNT[250]={true};
int isUsed[250] = {0};
int res[250] = {0};
int dem = 0;
string kq = "";

void SangNT(){
    //res[0] = 1e9;
    memset(checkNT, true, 210);
    for(int i = 2; i <= 210; i++){
        if(checkNT[i]==true){
            for(int j = 2*i; j <= 210; j+=i){
                checkNT[j] = false;
            }
        }
    }
}

void Print(){
    dem++;
    for(int i = 1; i <= n; i++){
         kq+=to_string(res[i]);
         kq+=" ";
    }
    kq+="\n";
}

void Try(int index, int sum){
    if(index == n+1 && sum == 0){
        Print();
        return;
    }
    if(sum < 0 || index > n){
        return;
    }
    for(int i = 1; i >= 0; i--){
        if(checkNT[i] && isUsed[i]==0){
            if(i <= sum && i > res[index-1]){
                isUsed[i] = 1;
                res[index] = i;
                Try(index+1, sum - i);
                //Try(index, sum);
                isUsed[i] = 0;
            }
        }
    }
}

int main()
{
    int t;
    SangNT();
    cin >> t;
    while(t--){
        kq = "";
        dem=0;
        memset(isUsed, 0, sizeof isUsed);
        cin >> n >> p >> s;
        Try(1, s);
        cout << dem << endl;
        cout << kq << endl;
    }
    return 0;
}
