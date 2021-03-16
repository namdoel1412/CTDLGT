#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a[100];
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        if(n==1) cout << "Yes";
        else{
            bool check = true;
            if(n%2==0){
                int tmp = n/2;
                int leftPivot = (a[tmp] < a[tmp+1]) ? a[tmp] : a[tmp+1];
                int rightPivot = (a[tmp] > a[tmp+1]) ? a[tmp] : a[tmp+1];
                for(int i = tmp-1; i >= 1; i--){
                    if(a[i]<=leftPivot && a[n-i+1]>=rightPivot){
                        leftPivot = a[i];
                        rightPivot = a[n-i+1];
                    }
                    else if(a[i]>=rightPivot && a[n-i+1]<=leftPivot){
                        rightPivot = a[i];
                        leftPivot = a[n-i+1];
                    }
                    else{
                        check = false;
                    }
                }
            }
            else{
                int tmp = (n+1)/2;
                int leftPivot = 0;
                int rightPivot = 0;
                if(a[tmp-1]<=a[tmp+1] && a[tmp-1]<=a[tmp] && a[tmp+1]>=a[tmp]){
                    leftPivot = a[tmp-1];
                    rightPivot = a[tmp+1];
                }
                else if(a[tmp-1]>=a[tmp+1] && a[tmp-1]>=a[tmp] && a[tmp+1]<=a[tmp]){
                    leftPivot = a[tmp+1];
                    rightPivot = a[tmp-1];
                }
                else{
                    check = false;
                }
                for(int i = tmp-2; i >= 1; i--){
                    if(a[i]<=leftPivot && a[n-i+1]>=rightPivot){
                        leftPivot = a[i];
                        rightPivot = a[n-i+1];
                    }
                    else if(a[i]>=rightPivot && a[n-i+1]<=leftPivot){
                        rightPivot = a[i];
                        leftPivot = a[n-i+1];
                    }
                    else{
                        check = false;
                    }
                }
            }
            if(check){
                cout << "Yes";
            }
            else{
                cout << "No";
            }
        }
        cout << endl;
    }
    return 0;
}
