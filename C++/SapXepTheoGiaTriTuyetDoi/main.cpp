#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int x;

bool compare(const pair<int, int> &a, const pair<int, int> &b){
//    if(abs(x-a) < abs(x-b)) return true;
//    if(abs(x-a) == abs(x-b))
//    {
//        return a > b;
//    }
//    return false;
    if(abs(x-a.first) < abs(x-b.first)) return true;
    if(abs(x-a.first) == abs(x-b.first)) return a.second < b.second;
    return false;
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> x;
        // Note that using pair that has index to compare
        //int a[n+100] = {0};
        vector<pair<int, int> > a;
        int tmp;
        for(int i = 1; i <= n; i++){
            cin >> tmp;
            a.push_back(make_pair(tmp, i));
        }
        sort(a.begin(), a.end(), compare);
        for(int i = 0; i < n; i++){
            cout << a[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}
