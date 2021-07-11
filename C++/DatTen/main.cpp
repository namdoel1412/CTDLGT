#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    char st[30] = {'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    int a[30] = {0};
    memset(a, 0, sizeof a);
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
        while(true){
            for(int i = 1; i <= k; i++){
                cout << st[a[i]];
            }
            cout << endl;
            int index = k;
            while(index > 0 && a[index] == n-k+index){
                index--;
            }
            if(index == 0){
                break;
            }
            else{
                a[index]++;
                for(int i = index+1; i <= k; i++){
                    a[i] = a[index]+i-index;
                }
            }
        }
    }
    return 0;
}
