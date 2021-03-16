#include <iostream>

using namespace std;
int a[2000];

int CountZero(int leftPivot, int rightPivot){
    if(a[rightPivot] == 0) return rightPivot - leftPivot + 1;
    if(a[leftPivot] == 1) return 0;
    if(leftPivot < rightPivot){
        int middle = (leftPivot + rightPivot)/2;
        return CountZero(leftPivot, middle) + CountZero(middle + 1, rightPivot);
    }
    else return 0;
}

int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        cout << CountZero(1, n) << endl;
    }
    return 0;
}
