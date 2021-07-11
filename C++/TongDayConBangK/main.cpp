#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[100000];
int res[100000]={0};

void Print(){
    for(int i = 1; i <= n; i++){
        if(res[i]==1){
            cout << a[i] << " ";
        }
    }
    //memset(res, 0, sizeof res);
    cout << endl;
}
void Print2(int sum){
    for(int i = n; i >= 0; i--){
        //if(res[i]==1){
            cout << a[i] << " ";
        //}
    }
    cout << endl << sum;
    //memset(res, 0, sizeof res);
    cout << endl;
}

void Try(int index, int sum){
    for(int i = index; i <= n; i++){
        sum+=a[i];
        res[i]=1;
        if(sum == k){
            Print();
            return;
        }
        else if(sum < k){
            //Print();
            //cout << "Sum: " << sum << endl;
            Try(i+1, sum);
            res[i]=0;
            sum-=a[i];
        }
        else{
            res[i]=0;
            return;
        }
    }
}

int main()
{
    memset(res, 0, sizeof res);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    Try(1, 0);
    return 0;
}
