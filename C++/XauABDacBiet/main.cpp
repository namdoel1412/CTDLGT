#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[25]={0}, n, k;
string res = "";
int dem = 0;

void Print(){
    int demA = 0, demK = 0;
    for(int i = 1; i <= n; i++){
        if(a[i]){
            demA=0;
        }
        else{
            //cout << 'A';
            demA++;
        }
        if(demA==k) demK++;
        if(demK > 1) break;
        //cout << a[i];
    }
    if(demK == 1){
        for(int i = 1; i <= n; i++){
            if(a[i]){
                res+='B';
            }
            else{
                res+='A';
            }
        }
        res+='\n';
        dem++;
    }
}

// bỏ demK -> chỉ handle trường hợp số lần A xuất hiện liên tiếp
// chuyển phần handle đếm số dãy A có k ptu liên tiếp ở hàm Print();
void Try(int i, int demA, int demK){
    for(int j = 0; j <= 1; j++){
        if(j == 0){
            a[i]=j;
            demA++;
        }
        else{
            a[i]=j;
            demA=0;
        }
        if(i < n){
            if(demA <= k){
                Try(i+1, demA, demK);
            }
        }
        else{
            if(demA <= k){
                Print();
            }
        }
    }
}

int main()
{
    cin >> n >> k;
    memset(a, 0, sizeof a);
    Try(1, 0, 0);
    cout << dem << endl;
    cout << res;
    return 0;
}
