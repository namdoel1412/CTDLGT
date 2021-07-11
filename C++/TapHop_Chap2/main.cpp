#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, s;
    while(true){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0){
            break;
        }
        int a[n+5] = {0};
        memset(a, 0, sizeof a);
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
        int res = 0;
        if(k <= n){
            while(true){
                //check min
//                while(true){
//                    int check_min = 1;
//                    int pivot = 0;
//                    for(int i = 1; i <= k; i++){
//                        int prevsum = 0;
//                        for(int j = 1; j < i; j++){
//                            prevsum+=a[i];
//                        }
//                        int tmp = k-i;
//                        if(prevsum + a[i] + (k-i)*n - tmp*(tmp-1)/2 < s){
//                            if(a[i]+1 <= n-k+i){
//                                pivot = i;
//                                check_min = 0;
//                            }
//                            else{
//                                check_min = 1;
//                            }
//                            break;
//                        }
//                        else{
//                            check_min = 1;
//                        }
//                    }
//                    if(check_min == 0 && pivot != 0){
//                        a[pivot]+=1;
//                        int tmp_2 = a[pivot];
//                        for(int i = pivot+1; i <= k; i++){
//                            a[i] = tmp_2+i-pivot;
//                        }
//                    }
//                    if(check_min == 1) break;
//                }
                int sum = 0;
                for(int i = 1; i <= k; i++){
                    sum+=a[i];
                    //cout << a[i] << " ";
                }
                //cout << endl;
                if(sum == s){
                    res++;
                }
                int index = k;
                while(index > 0 && a[index] == n-k+index){
                    index--;
                }
                if(index == 0){
                    break;
                }
                else{
                    a[index]++;
                    int tmp = a[index];
                    for(int i = index+1; i <= k; i++){
                        a[i] = tmp+i-index;
                    }
                    //cout << endl;
                    //cout << sum << endl;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
