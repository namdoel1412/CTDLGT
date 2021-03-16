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
    memset(checkNT, true, 230);
    for(int i = 2; i <= 230; i++){
        if(checkNT[i]==true){
            for(int j = 2*i; j <= 230; j+=i){
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
    kq+=".";
}

void Try(int index, int sum, int recentAdd){
//    if(index == n+1 && sum == 0){
//        Print();
//        return;
//    }
    if(index > n+1){
        return;
    }
    for(int i = recentAdd; i < s; i++){
        while(!checkNT[i] && i < s) i++;
        res[index] = i;
        if(index==n){
            if(sum-i == 0){
                Print();
                return;
            }
        }
        else{
            Try(index+1, sum-i, i+1);
        }
//        if(sum - i >= 0){
//            Try(index+1, sum-i, i+1);
//        }
//        else{
//            return;
//        }
//        if(checkNT[i]){
//            for(int j = 1; j >= 0; j--){
//                if(j*i <= sum){
//                    sum-=j*i;
//                    if(j==1){
//                        res[index] = j*i;
//                        Try(index+1, sum, i+1);
//                    }
//                    else{
//                        Try(index, sum, i+1);
//                    }
//                    sum+=j*i;
//                }
//            }
//        }
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
        cin >> n >> p >> s;
        Try(1, s, p+1);
        cout << dem << endl;
        int len = kq.length();
        for(int i = 0; i < len; i++){
            if(kq[i]!='.'){
                cout << kq[i];
            }
            else{
                cout << endl;
            }
        }
    }
    return 0;
}
