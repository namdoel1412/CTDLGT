#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findAWay(int step){
    if(step == 0){
        return 1;
    }
    else if(step < 0){
        return 0;
    }
    else{
        return findAWay(step - 1) + findAWay(step - 2) + findAWay(step - 3);
    }
}

int main()
{
    int t;
    int n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << findAWay(n) << endl;
    }
    return 0;
}
