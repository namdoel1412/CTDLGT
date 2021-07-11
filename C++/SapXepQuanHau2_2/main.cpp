#include <iostream>

using namespace std;

int a[10][10], maxx=-1e9, cheo1[20]={0}, cheo2[20]={0}, cot[10]={0};

void Try(int index, int tong){
    for(int i = 1; i <= 8; i++){
        if(!cot[i] && !cheo1[index-i+8] && !cheo2[index+i]){
            tong+=a[index][i];
            cot[i]=1;
            cheo1[index-i+8]=1;
            cheo2[index+i]=1;
            if(index == 8){
                if(maxx < tong){
                    maxx = tong;
                }
            }
            else{
                Try(index+1, tong);
            }
            tong-=a[index][i];
            cot[i]=0;
            cheo1[index-i+8]=0;
            cheo2[index+i]=0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        maxx = -1e9;
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        Try(1, 0);
        cout << maxx << endl;
    }
    return 0;
}
