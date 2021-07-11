#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[10][10] = {0};
int cot[10]={0}, cheo1[20]={0}, cheo2[20]={0};
int maxx = -1e9, cmaxx = -1e9;
int dem=0;
void Try(int index, int res){
    if(res+(8-index+1)*cmaxx > maxx){
        for(int i = 1; i <= 8; i++){
            if(cot[i]==0 && cheo1[index+i]==0 && cheo2[index-i+8]==0){
                res+=a[index][i];
                cot[i]=1;
                cheo1[index+i]=1;
                cheo2[index-i+8]=1;
                if(index == 8){
                    //dem++;
                    if(maxx < res){
                        maxx = res;
                    }
                }
                else{
                    Try(index+1, res);
                }
                cot[i]=0;
                cheo1[index+i]=0;
                cheo2[index-i+8]=0;
                res-=a[index][i];
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        memset(a, 0, sizeof a);
        memset(cot, 0, sizeof cot);
        memset(cheo1, 0, sizeof cheo1);
        memset(cheo2, 0, sizeof cheo2);
        maxx = -1e9, cmaxx = -1e9;
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
                if(a[i][j] > cmaxx){
                    cmaxx = a[i][j];
                }
            }
        }
        Try(1, 0);
        cout << maxx << endl;
    }
    return 0;
}
