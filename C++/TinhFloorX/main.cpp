#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool mypredicate (int i, int j) {
  return (i<=j);
}

int main()
{
    int t, n, x;
    cin >> t;
    //long long a[10000000];
    vector< pair<int, int> > vect;
    while(t--){
        cin >> n >> x;
        vector<int> vect2;
        vect2.push_back(x);
        long long tmp;
        for(int i = 1;i <= n; i++){
            //cin >> n
            cin >> tmp;
            vect.push_back(tmp);
        }
        vector<int>::iterator it;
        sort(vect.begin(), vect.end(), greater<int>() );
        it = search(vect.begin(), vect.end(), vect2.begin(), vect2.end(), mypredicate);
        if(it != vect.end()){
            cout << *it;
        }
        else{
            cout << "-1";
        }
        cout << endl;
        vect.clear();
    }
    return 0;
}
