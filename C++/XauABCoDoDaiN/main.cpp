#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int t, n, k;
char a[25];
void Check(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}

void Try(int index){
    for(int i = 0; i <= 1; i++){
        a[index] = (i==0?'A':'B');
        if(index < n){
            Try(index+1);
        }
        else{
            Check();
        }
    }
}

int main()
{
    memset(a,'A',sizeof a);
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}
